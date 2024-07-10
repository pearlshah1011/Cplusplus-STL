#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int k, x, a;
       cin>>k>>x>>a;

       if(x<=a-1)
       {
        if (x<= k-1)
        {
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
       }
       else
       {
        cout<<"NO\n";
       }
    }
    return 0;
}