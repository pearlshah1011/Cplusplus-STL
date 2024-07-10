#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        sort(a,a+n);
        long long int sum1=0;
        long long int sum2=0;
        for(int i=1;i<n;i++)
        {
            sum1=sum1+a[i];

        }
        for(int i=0;i<n-1;i++)
        {
            sum2=sum2+a[i];

        }
        int ans=0;
        ans=sum1-sum2;
        cout<<ans<<endl;




    }
    
}