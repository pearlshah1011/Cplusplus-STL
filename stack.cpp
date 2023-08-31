#include<bits/stdc++.h>
using namespace std;
//LIFO
int main()
{
    stack<int> st;
    st.push(100);
    st.emplace(50);
    st.emplace(20);
    cout<<st.top();
}
