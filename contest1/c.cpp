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
       int start_seq=1;
       int cnt_start=0;
       while(a[start_seq]==a[0] && start_seq<n)
       {
          start_seq++;
          cnt_start++;
       }
       int end_seq=n-2;
       int cnt_end=0;
       int ans=0;
       while(a[end_seq]==a[n-1] && end_seq>=0)
       {
         end_seq--;
         cnt_end++;
       }
       
       if(cnt_end==0 && cnt_start==0 && a[n-1]!=a[0])
       {
        ans=n-1;
       }
       else if(a[n-1]==a[0])
       {
         int i=start_seq;
         int j=end_seq;
        ans=j-i+1;
       }
       else if(cnt_start>cnt_end)
       {
        int i=start_seq;
        int j=n-1;
        ans=j-i+1;

       }
       else if(cnt_end>cnt_start)
       {
        int j=end_seq;
        int i=0;
         ans=j-i+1;
       }
       else if(cnt_end==cnt_start)
       {
        ans=n-1-start_seq;
       }
       if(cnt_start==n-1 || cnt_end==n-1)
       {
          ans=0;
       }
       

      cout<<ans<<endl;

    }
}