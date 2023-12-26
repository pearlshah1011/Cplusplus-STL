#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int main()
{
    string s;
    string t;
    cin>>s;
    cin>>t;
    reverse(s.begin(),s.end());
    if(s==t)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}