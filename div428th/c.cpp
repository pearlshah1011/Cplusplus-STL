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
        long long int arr[n];
        long long int sum=0;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            sum=sum+arr[i];

        }
        long long int sr=sqrt(sum);
        if(sr*sr==(sum))
        {
            cout<<"YES\n";
        }
        else
        {
            cout<<"NO\n";
        }
    }
}