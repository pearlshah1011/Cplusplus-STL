#include<bits/stdc++.h>
using namespace std;

int main()
{
    int lim;
    int bob;
    cin>>lim;
    cin>>bob;
    int cnt=0;
    while(lim<=bob)
    {
        lim=lim*3;
        bob=bob*2;
        cnt++;
    }

    cout<<cnt<<endl;
}