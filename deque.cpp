#include<bits/stdc++.h>
using namespace std;
int main()
{  //deque with data type int
    deque<int>dq;
    dq.push_back(50);
    dq.push_front(20);//{20,50}
    dq.emplace_front(500);
    dq.emplace_back(190);
   
   for(auto it=dq.begin();it!=dq.end();it++)
   {
    cout<<*(it)<<" ";
   } 
    //deque with data type string
    deque<string> dq2;
    dq2.push_back("pearl");
    dq2.emplace_front("shreyash");
    dq2.push_front("parul");
      
   for(auto it=dq2.begin();it!=dq2.end();it++)
   {
    cout<<*(it)<<" ";
   } 

}