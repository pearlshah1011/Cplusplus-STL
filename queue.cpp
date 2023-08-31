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
    cout<<q.front();

}