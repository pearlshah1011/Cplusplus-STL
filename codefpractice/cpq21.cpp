#include<bits/stdc++.h>
using namespace std;
#include<string.h>

int main()
{
    string s;
    cin>>s;
    stack<char> st;
    int i=0;
    
  int flag=0;
  int n=s.size();
   while(i<n)
   {
   
    if(st.size()==7)
    {
        cout<<"YES\n";
        flag=1;
        return 0;
        break;

    }
    if(st.size()==0)
    {
      st.emplace(s[i]);
    }
    else 
    {
      if(st.top()==s[i])
      {
        st.emplace(s[i]);
      }
      else
      {
        while(st.size()!=0)
        {
            st.pop();
        }

      }
    } 
   
   
   
   i++;
  
   }

   if(st.size()==6)
{
    cout<<"YES\n";
}
else if(flag==0)
{ 
    cout<<"NO\n";
    
}

}

