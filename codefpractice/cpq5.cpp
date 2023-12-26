#include<bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    string s1;
    cin>>s1;
    sort(s1.begin(),s1.end());
    int i=0;
    stack<char> st;
    while(s1[i]!=NULL)
    {
        st.emplace(s1[i]);
        i++;
    }

    if(i==1)
    {
        cout<<s1<<endl;
        return 0 ;
    }
 
    stack<char> st2;
    while(int(st.top())>44)
    {
        char temp=st.top();
        st.pop();
        st2.emplace(temp);

    }
    while(st2.size()!=0)
    {
        if(st2.size()>1)
        {
            cout<<st2.top()<<"+";
            st2.pop();
        }
        else if(st2.size()==1)
        {
            cout<<st2.top();
            st2.pop();
        }
      
        
    }
    cout<<endl;
}