#include<bits/stdc++.h>
using namespace std;
int main()
{  //a set is sorted and unique
    set<int>s;
    s.insert(1);//{1}
    s.emplace(2);//{1,2}
    s.insert(2);//{1,2}
    s.insert(4);//{1,2,4}
    s.insert(3);//{1,2,3,4}

    auto it=s.find(3);//returns iterator it that points to 3 in {1,2,3,4}
    auto it =s.find(6);//points to after last element


    s.erase(3);//deletes 3 but maintains sorted order // logarthmic time complexity

    int cnt=s.count(1); //either 1 or 0

    auto it=s.find(2);
    s.erase(it);
    
    //if set is {1,2,3,4,5}
    auto it1=s.find(2);
    auto it2=s.find(4);
    s.erase(it1,it2);//{1,4,5} [first,last)
    //here everything happens in log time complexity //binary search tree types
    


}