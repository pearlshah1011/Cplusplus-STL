#include<bits/stdc++.h>
using namespace std;
#include<string.h>
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
        map< char,char> mp;
        string s2="";
        
        for(int i=0;i<n;i++)
        {
           if((s[i]=='a' )|| (s[i]=='e'))
           {
            mp[s[i]]='V';
           }
           else
           {
            mp[s[i]]='C';
           }
        }
        int i=0;
        while(i<n)
        {   
            if(s[i+2]==NULL)
            {
                s2+=s[i];
                s2+=s[i+1];
                
                break;
            }
            if(s[i+3]==NULL)
            {
                s2+=s[i];
                s2+=s[i+1];
                s2+=s[i+2];
                
                break;
            }
            if(mp[s[i+3]]=='C')
            {
                //cout<<s[i]<<s[i+1]<<s[i+2]<<".";
                s2+=s[i];
                s2+=s[i+1];
                s2+=s[i+2];
                s2+=".";
                 i=i+3;
            }
            else if(mp[s[i+3]]=='V')
            {
                s2+=s[i];
                s2+=s[i+1];
                s2+=".";
                i=i+2;
            }
        }

     cout<<s2<<"\n";
    }

}