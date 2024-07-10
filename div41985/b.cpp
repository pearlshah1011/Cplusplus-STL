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
       vector<int> x_vals;
       vector<int> k;
       for(int i=2;i<=n;i++)
       {
        x_vals.push_back(i);
       }
        
        for(int i=0;i<x_vals.size();i++)
        {
            k.push_back(n/x_vals[i]);
        }

        vector<int>sum;

        for(int i=0;i<x_vals.size();i++)
        {
            sum.push_back(x_vals[i]*k[i]*(k[i]+1)/2);
        }
        int max_sum=0;
        int x_val_max;
        int k_max;
        for(int i=0;i<sum.size();i++)
        {
        if(sum[i]>max_sum)
        {
        max_sum=sum[i];
        x_val_max=x_vals[i];
        }

        }

        cout<<x_val_max<<endl;




    }
}