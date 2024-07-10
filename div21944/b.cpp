#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      int n,k;
      cin>>n>>k;
      int a[n];
      int b[n];
      for(int i=0;i<n;i++)
      {
        cin>>a[i];
      }
      for(int i=0;i<n;i++)
      {
        cin>>b[i];
      }

      string s[n];
      for(int i=0;i<n;i++)
      {
        s[a[i]-1].append("l");

      }
      for(int i=0;i<n;i++)
      {
        s[b[i]-1].append("r");
        
      }
      int cnt_lr = 0;
     
      for(int i=0;i<n;i++)
      {
        if(s[i]=="lr")
        {
            cnt_lr++;
        }
      }
      vector <int> l;
      vector<int> r;
      int tempcnt=0;
      for(int i = 0; i< n; i++)
      {
        if(cnt_lr%2==0)
        {
            if(tempcnt == cnt_lr)
                break;
        }
        else 
        {
            if(tempcnt == cnt_lr - 1)
                break;
        }
        if(s[i]=="lr")
        {
            l.push_back(i+1);
            r.push_back(i+1);
            tempcnt++;
        }

      }

       for(int i = 0; i< n; i++)
      {
        if(s[i]=="ll")
        {
            l.push_back(i+1);
            l.push_back(i+1);
           

        }
        if(s[i]=="rr")
        {
            r.push_back(i+1);
            r.push_back(i+1);
        }

      }
      

      for(int i=0;i<2*k;i++)
      {
        cout<<l[i]<<" ";
      }
      cout<<endl;
      for(int i=0;i<(2*k);i++)
      {
        cout<<r[i]<<" ";
      }
      cout<<endl;








    }
}