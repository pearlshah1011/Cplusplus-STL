#include<bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    string s;
    cin>>s;
    
    if(s[0]>95)
    {
      s[0]=s[0]-32;
    }

    cout<<s<<endl;
}