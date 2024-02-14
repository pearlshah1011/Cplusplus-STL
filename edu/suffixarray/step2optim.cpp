#include<bits/stdc++.h>
using namespace std;
#include<string.h>
 
 //sorts array p by the keys stored in array c
void count_sort(vector<int>&p,vector<int>&c)
{  
    int n=p.size();
    {
    vector<int> cnt(n);
    for(auto x:c )
    {
        cnt[x]++;
    }
     vector <int>p_new(n);
     vector<int> pos(n);
     pos[0]=0;
     for(int i=1;i<n;i++)
     {
        pos[i]=pos[i-1]+cnt[i-1];
     }
     for(auto x:p)
     { //key of first elem equal to class of left half
        int i=c[x];
        p_new[pos[i]]=x;
        pos[i]++;
     }
     p=p_new;
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
    // vector <pair<pair<int,int>,int>>a(n);
    // //making left and right part
    // for (int i=0;i<n;i++)
    // {
    //    a[i]={{c[i],c[(i+(1<<k))%n]},i};
       
    // }
    //sort by second half
    for(int i=0;i<n;i++)
    {
        p[i]=(p[i]-(1<<k)+n)%n;
    }
    //shift the string

    count_sort(p,c);
         
        //now p[n] is a.second c[n]is to be found
            vector<int> c_new(n);

            c_new[p[0]]=0;
            for(int i=1;i<n;i++)
            {  
                 pair<int,int> prev={c[p[i-1]],c[(p[i-1]+(1<<k))%n]};
                pair<int,int> now={c[p[i]],c[(p[i]+(1<<k))%n]};
                if(prev==now)
                {
                    c_new[p[i]]=c_new[p[i-1]];
                }
                else
                {
                    c_new[p[i]]=c_new[p[i-1]]+1;
                }
            }
            c=c_new;
    k++;
 
  }
    
 
for(int i=0;i<n;i++)
{
    cout<<p[i]<<" ";
}
 
 
 
}