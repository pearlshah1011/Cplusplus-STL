#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      string s;
      cin>>s;
      int i=0;
      int cntA=0;
      int cntB=0;
      while(s[i]!='\0')
      {
        if(s[i]=='A')
        {
            cntA++;

        }
        else
        {
            cntB++;
        }

       i++;
      }
      if(cntA>cntB)
      {
        cout<<"A"<<endl;
      }
      else
      {
        cout<<"B"<<endl;
      }
        }


    }

