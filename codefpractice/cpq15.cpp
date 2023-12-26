#include<bits/stdc++.h>
using namespace std;
#include<string.h>

int main()
{
    string s;
    int n;
    cin>>n;
    cin>>s;
    int i=0;
    int ant=0;
    int dan=0;
    while(n--)
    {
       if(s[i]=='A')
       { 
        ant++;
       }
       else
       {
        dan++;
       }
       i++;
    }

    if(ant>dan)
    {
        cout<<"Anton"<<endl;
    }
    else if(dan>ant)
    {
        cout<<"Danik"<<endl;
    }
    else
    {
        cout<<"Friendship"<<endl;
    }
}