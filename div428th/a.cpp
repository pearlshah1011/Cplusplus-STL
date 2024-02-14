#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int arr[3];
        multiset <int> ms;
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
            ms.emplace(arr[i]);
        }
       
        if(*next(ms.begin(),1)==*next(ms.begin(),0))
        {
            cout<<*ms.rbegin()<<"\n";
        }
        else
        {
            cout<<*ms.begin()<<"\n";
        }


    }
}
