#include<bits/stdc++.h>
using namespace std;
int main()
{
    //containers
    //storing couple of integers together
    pair<int,int> p= {1,3};
    cout<<p.first<<" "<<p.second<<"\n";

    pair<int,pair<int,int>> t={5,{1,4}};
    cout<<t.first<<" "<<t.second.first<<" "<<t.second.second<<"\n";

    pair<int,int> arr[]={{1,2},{1,4},{1,5}};
    cout<<arr[1].second<<"\n";


}