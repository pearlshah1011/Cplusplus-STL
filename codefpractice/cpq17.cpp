#include<bits/stdc++.h>
using namespace std;
#include<string.h>

int main()
{   int n,t;
    string s;
    cin>>n;
    cin>>t;
    cin>>s;
    int i=1;
   
    while(t--)
    {
        for(int i=0;i<n;++i)
        {
            if(s[i]=='G'&& s[i-1]=='B')
            {
               s[i]='B';
               s[i-1]='G';
               ++i;
            }
           
            
        }
    }

    cout<<s;


}