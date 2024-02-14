#include <bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        map<char,int> mp;
        int i=0;
        while(s[i]!=NULL)
        {
           mp[s[i]]++;
           i++;
        }
        int max=0;
        for(char i='a';i<='z';i++)
        {
            if(max<mp[i])
            {
                max=mp[i];
            }
        }
        int ans;
        if(max>(n/2))
        {
            ans=n-((n-max)*2);
        }
        else
        {
           if(n%2==0)
           {
            ans=0;
           }
           else
           {
            ans=1;
           }
        }
     cout<<ans<<endl;
    }

}