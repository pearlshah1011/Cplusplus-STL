#include<bits/stdc++.h>
using namespace std;
//LIFO
int main()
{
    stack<int> st;
    st.push(100);
    st.emplace(50);
    st.emplace(20);
    cout<<st.top();//20
    st.pop();//{50,100}
    cout<<st.size();//2
    //empty,swap
    stack<int> st1,st2;
    st1.swap(st2);

}
