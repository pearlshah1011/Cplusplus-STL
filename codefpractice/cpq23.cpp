#include<bits/stdc++.h>
using namespace std;
#include<string.h>

int main()
{
    int n;
    int m;
    cin>>n;
    cin>>m;

    int no_of_socks=n;
    int no_of_days=0;

    while(no_of_socks>0)
    {  
        no_of_socks--;
        no_of_days++;  
        if(no_of_days%m==0)
        {
            no_of_socks++;
        }

    }
    cout<<no_of_days<<endl;
}


