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
        int sum=0;
        for(int i=0;i<n;i++)
        {
          cin>>a[i];
          sum+=a[i];
        }
        int avg=sum/n;
        int diff_a[n];
        for(int i=0;i<n;i++)
        {
          diff_a[i]=a[i]-avg;
        }
        int sum2=0;
        int flag=0;
        for(int i=0;i<n;i++)
        {
           sum2=sum2+diff_a[i];
           if(sum2<0)
           {
             flag=1;
             break;
           }
        }
        if(flag==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }


    }
}