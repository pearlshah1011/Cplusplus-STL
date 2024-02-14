#include<bits/stdc++.h>
using namespace std;
#include<string.h>

int main()
{
   string s1;
   string s2;
   cin>>s1;
   cin>>s2;
   int i=0;
   while(s1[i]!=NULL)
   {
      if(s1[i]!=s2[i])
      {
        cout<<"1";
      }
      else
      {
        cout<<"0";
      }
      i++;
   }
   cout<<"\n";
}