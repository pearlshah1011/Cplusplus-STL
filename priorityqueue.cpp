#include<bits/stdc++.h>
using namespace std;
int main()
{   //max heap
    priority_queue<int> pq;
    //if we declare it like this the max value always stays at top and descending
    pq.push(5);//{5}
    pq.push(2);//{5,2}
    pq.emplace(8);//{8,5,2}
    pq.emplace(10);//{10,8,5,2}
    cout<<pq.top();

    
    //Minimum heap
    priority_queue<int,vector<int>,greater<int>> p;
    p.push(20);//{20}
    p.emplace(40);//{20,40}
    p.push(100);//{20,40,100}
    cout<<p.top();
    p.pop();
    cout<<p.top();





}