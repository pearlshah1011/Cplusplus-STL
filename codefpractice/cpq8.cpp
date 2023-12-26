#include<bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;

    s.erase(unique(s.begin(), s.end()), s.end());
    cout<<n-s.length()<<endl;


}