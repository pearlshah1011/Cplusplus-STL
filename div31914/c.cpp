#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }

        // int max_exp=a[0];
        // int max_b=b[0];
        // int cnt=1;
        // int flag=0;
        //     for(int i=1;i<n;i++)
        //     {
        //         if(cnt==k)
        //         {
        //             break;
        //         }

        //         else
        //         {
        //            if(a[i]<max_b)
        //             {
        //                 flag=1;
        //                 max_exp+=max_b;
        //                 cnt++;
        //                 break;

        //             }
        //             else
        //             {
        //              max_exp+=a[i];
        //             cnt++;
        //             if(b[i]>max_b)
        //             {
        //                 max_b=b[i];
        //             }
        //             }
        //             }

        //     }
        //     if(flag==1)
        //         {
        //             while(cnt<=k)
        //             {
        //                 max_exp+=max_b;
        //                 cnt++;
        //             }

        //         }
        //     // if(cnt<k)
        //     // {
        //     //     while(cnt<k)
        //     //     {
        //     //       max_exp+=max_b;
        //     //       cnt++;
        //     //     }

        //     // }

        // cout<<max_exp<<endl;
        int sum_a = a[0];
        int max_b = b[0];
        // set<int> max_exp;
        int max_exp = (sum_a + (k-1) * max_b);
        for (int i = 1; i < n && i < k; i++)
        {
            sum_a += a[i];
            if (max_b < b[i])
            {
                max_b = b[i];
            }
            int num_of_times = k - i - 1;
            if (num_of_times < 0) 
            {
                num_of_times = 0;
            }
            int result_for_one_t = sum_a + (num_of_times * max_b);
            if (result_for_one_t > max_exp)
            {
                max_exp = result_for_one_t;
            }
            // max_exp.emplace(result_for_one_t);
        }

        cout << max_exp << endl;
    }
}