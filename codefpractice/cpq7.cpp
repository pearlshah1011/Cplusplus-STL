#include<bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    string s;
    cin>>s;
    unordered_set<char> st;
    int i=0;
    while(s[i]!=NULL)
    {
        st.emplace(s[i]);
        i++;
    }

    int cnt=st.size();
    if(cnt%2!=0)
    {
        cout<<"IGNORE HIM!"<<endl;
    }
    else
    {
        cout<<"CHAT WITH HER!"<<endl;
    }
}