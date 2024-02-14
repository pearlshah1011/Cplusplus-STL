#include<bits/stdc++.h>
using namespace std;


int main()
{
    int test_cases;
    cin>>test_cases;
    while(test_cases--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        //checking how many distinct pairs of chracters exist at each pt
        
        set<char> st;
        int iterator=0;
        int result=0;
        while(s[iterator]!=NULL)
        {
           st.insert(s[iterator]);
           result=result+st.size();
           iterator++;
        }

        cout<<result<<endl;
    }
}