#include<bits/stdc++.h>
using namespace std;
int main()
{
    list<int> ls;
    //insert in vector costs a lot of time
    //inserting in list is better because internally maintains a doubly linked list
    ls.push_back(2);
    ls.emplace_back(4);
    ls.push_front(5);
    ls.emplace_front(7); 
    for(auto it=ls.begin();it!=ls.end();it++)
    {
       cout<<*(it)<<" ";
    }

} 