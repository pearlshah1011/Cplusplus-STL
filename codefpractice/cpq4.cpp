#include<bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    string s1;
    string s2;
    cin>>s1;
    cin>>s2;

    transform(s1.begin(),s1.end(),s1.begin(),::tolower);
    transform(s2.begin(),s2.end(),s2.begin(),::tolower);
    int t=strcmp(s1.c_str(),s2.c_str());
    cout<<t<<endl;
     

}