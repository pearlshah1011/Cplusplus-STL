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

        if(k==0)
        {
            
            for(int i=n;i>=1;i--)
            {
            cout<<i<<" ";
            }
        }
        else
        {
            for(int i=1;i<=k;i++)
            {
            cout<<i<<" ";
            }
            if(n>=k+1)
            {  
                for(int i=n;i>k;i--)
                {
                    cout<<i<<" ";
                }
            }
            
        }
        cout<<endl;
        
    }


}