#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int x=0;

    for(int i=0;i<n;i++)
    {
        string s;
        cin>>s;
        if(s[1]=='+')
        {
            x=x+1;
        }
        else
        {
            x=x-1;
        }
    }

    cout<<x<<endl;
}