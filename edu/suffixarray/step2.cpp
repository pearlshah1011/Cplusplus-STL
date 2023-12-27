#include<bits/stdc++.h>
using namespace std;
#include<string.h>

void radix_sort(vector <pair<pair<int,int>,int>>&a)
{
    int n= a.size();
    vector<int> cnt(n);
    for(int i=0;i<n;i++)
    {
        cnt[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cnt[a[i].first.second]++;
    }
   vector <pair<pair<int,int>,int>>a_new(n);
   //split this new array into buckets
   //we calculate index of first element of each buket
   vector<int> pos;
   pos[0]=0;
   for(int i=1;i<n;i++)
   {
    pos[i]=pos[i-1]+cnt[i-1];
   }
   //iteration in a
   for(auto x:a)
   {
    int i= x.first.second;
    a_new[pos[i]]=x;
    pos[i]++;
   }


   // by first element
   a=a_new;
    vector<int> cnt(n);
    for(int i=0;i<n;i++)
    {
        cnt[i]=0;
    }
    for(int i=0;i<n;i++)
    {
        cnt[a[i].first.first]++;
    }
   vector <pair<pair<int,int>,int>>a_new(n);
   //split this new array into buckets
   //we calculate index of first element of each buket
   vector<int> pos;
   pos[0]=0;
   for(int i=1;i<n;i++)
   {
    pos[i]=pos[i-1]+cnt[i-1];
   }
   //iteration in a
   for(auto x:a)
   {
    int i= x.first.first;
    a_new[pos[i]]=x;
    pos[i]++;
   }
}

int main()
{
    string s;
    cin>>s;
    s=s+"$";
    int n= s.size();
     vector<int>p(n);
     vector<int>c(n);
   //for k=0
   int k=0;
   //charcters and positions
       {     vector <pair<char,int>> a(n);
            for(int i=0;i<n;i++) 
            {
                a[i]={s[i],i};
            }
        
        sort(a.begin(),a.end());
        
        //now p[n] is a.second c[n]is to be found
            for(int i=0;i<n;i++) 
            {
                p[i]=a[i].second;
            }
            c[p[0]]=0;
            for(int i=1;i<n;i++)
            {
                if(a[i].first==a[i-1].first)
                {
                    c[p[i]]=c[p[i-1]];
                }
                else
                {
                    c[p[i]]=c[p[i-1]]+1;
                }
            }
  
       }
  // now for other k
  
  while(pow(2,k)<n)
  {
    vector <pair<pair<int,int>,int>>a(n);
    //making left and right part
    for (int i=0;i<n;i++)
    {
       a[i]={{c[i],c[(i+(1<<k))%n]},i};
       
    }
    radix_sort(a);
         
        //now p[n] is a.second c[n]is to be found
            for(int i=0;i<n;i++) 
            {
                p[i]=a[i].second;
            }
            c[p[0]]=0;
            for(int i=1;i<n;i++)
            {
                if(a[i].first==a[i-1].first)
                {
                    c[p[i]]=c[p[i-1]];
                }
                else
                {
                    c[p[i]]=c[p[i-1]]+1;
                }
            }
    k++;

  }
    

for(int i=0;i<n;i++)
{
    cout<<p[i]<<" ";
}



}
