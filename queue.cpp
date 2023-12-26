#include<bits/stdc++.h>
using namespace std;
int main()
{  //fifo
    queue<string> q;
    q.push("You");
    q.emplace("Love");
    q.push("I");
    //appending string 
    q.back()+="ten";
    cout<<q.back();
    cout<<" ";
    cout<<q.front();

    queue<int> q1;
    q1.push(5);//{5}
    q1.push(2);//{5,2}
    q1.emplace(4);//{5,2,4}

    q1.back()+=3;//{5,2,7}

    cout<<q1.back();//7
    cout<<q1.front();//5
    q1.pop();//removes 5

    cout<<q1.front();//2



}