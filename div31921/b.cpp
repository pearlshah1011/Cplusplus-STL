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
      string s;
      string f;
      cin>>s;
      cin>>f;
      int i=0;
      int cnt_s=0;
      int cnt_f=0;
      while(s[i]!=NULL)
      {
        if(s[i]!=f[i])
        {
            if(s[i]=='1')
            {
                cnt_s++;
            }
            else
            {
               cnt_f++;
            }
        }
        i++;
      }

      if(cnt_s>cnt_f)
      {
        cout<<cnt_s<<endl;
      }
      else
      {
        cout<<cnt_f<<endl;
      }
    }
}