#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {  
        int x[4];
        int y[4];
        int i=0;
        int p=4;
        while(p--)
        {
            cin>>x[i];
            cin>>y[i];
            i++;
        }
        int ans;
        int flag=0;
        if(x[0]==x[1])
        {
            ans= abs(y[1]-y[0]);
            ans=ans*ans;
            cout<<ans<<endl;
        }
        else if(y[0]==y[1])
        {
            ans= abs(x[1]-x[0]);
            ans=ans*ans;
            cout<<ans<<endl;
        }
        else
        {
            ans=(y[1]-y[0])*(y[1]-y[0]) + (x[1]-x[0])*(x[1]-x[0]);
            ans=ans/2;
            cout<<ans<<endl;
        }

        
    }
}