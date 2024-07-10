#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        // int k,q;
        // cin>>k>>q;
        // int a[k];
        // int n[q];
        // for(int i=0;i<k;i++)
        // {
        //     cin>>a[i];
        // }
        // for(int i=0;i<q;i++)
        // {
        //     cin>>n[i];
        // }
        // for(int i=0;i<q;i++)
        // {
        //     int n_1=n[i];
            
           
            
        //     while(n_1!=0 && *min_element(a,a+k)<=n_1)
        //     {

        //         int count_no_of_index_to_remove=0;
        //         for(int p=0;p<k;p++)
        //         {
                
        //         if(a[p]>n_1)
        //         {
        //             break;
        //         }
        //         count_no_of_index_to_remove++;
        //         }
        //         n_1=n_1-count_no_of_index_to_remove;
        //     }

        //     cout<<n_1<<" ";
           
            
             
            

        // }
       int n,k;
       cin>>n>>k;
       int a[n];
       vector<int> freq(101,0);
       for(int i=0;i<n;i++)
       {
        cin>>a[i];
        freq[a[i]]++;
       }
        int  ans=-1;
        for(int i=1;i<=100;i++)
        {
            if(freq[i])
            {
                ans = max(ans,freq[i]);
            }
        }

        if(ans < k)
        {
            cout<<n<<endl;
        } else {
            cout<<k-1<<endl;
        }

        // cout<<"\n";
    }
}