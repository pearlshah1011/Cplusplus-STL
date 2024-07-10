#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        int f;
        int k;
        cin>>n>>f>>k;
        vector<int> a(n);
        for(int i=0;i<n;i++)
        {
            cin>>a[i];

        }
        int val_at_f=a[f-1];

        sort(a.begin(),a.end(),greater<int>());
         int count=1;
         int flag=0;
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==val_at_f && i<(k-1))
            {
                flag=1;

            }
            if(a[i]==val_at_f && i>(k-1))
            {
                if(flag==1)
                {
                    flag=2;

                }
                else
                {
                    flag=0;
                }
                
                break;

            }
            if(a[i]<val_at_f)
            {
                break;

            }
            
        }

        if(flag==1)
        {
            cout<<"YES";
        }
        if(flag==2)
        {
            cout<<"MAYBE";
        }
        if(flag==0)
        {
            cout<<"NO";
        }
        cout<<endl;

    }
}