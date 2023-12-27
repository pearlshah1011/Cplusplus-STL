#include<bits/stdc++.h>
using namespace std;
#include<string.h>


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
    k++;

  }
    

for(int i=0;i<n;i++)
{
    cout<<p[i]<<" ";
}



}
