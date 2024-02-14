#include<bits/stdc++.h>
using namespace std;


int main()
{
    int n;
    cin>>n;
    int a[n];
    
    
    
    set<int> s;
    for(int i=0;i<n;i++)
    {   
        cin>>a[i];
        

    }
    
    s.emplace(a[0]);
    
    int cnt=0;
    for(int i=1;i<n;i++)
    {  
       int t=*s.begin();
       int delta=*s.rbegin();
       if(a[i]<t)
       { 
           cnt++;
       }
       else if(a[i]>delta)
       {
        cnt++;
       }
       s.emplace(a[i]);
    }
   
   cout<<cnt;
}