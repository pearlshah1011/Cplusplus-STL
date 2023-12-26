#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,w;
    cin>>k;
    cin>>n;
    cin>>w;

    int ans= (k*w*(w+1)/2) -n;

    if((k*w*(w+1)/2)<=n)
    {
       cout<<"0"<<endl;
    }
    else{
     cout<<ans<<endl;
    }
    
}