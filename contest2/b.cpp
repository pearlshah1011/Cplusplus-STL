#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int n,k;
       cin>>n>>k;
       int ans;
       if(k<((4*n)-2))
       {
        if(k%2==0)
        {
            ans=k/2;

        }
        else
        {
            ans=(k+1)/2;
        }

       }
       else
       {
        ans=2*n;
       }

       cout<<ans<<endl;




    }
    
}