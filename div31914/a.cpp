#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        multiset<char> ms;
        
        int i=0;
        while(s[i]!=NULL)
        {
            ms.emplace(s[i]);
            i++;
        }
        
        int no_of_minutes=1;
        int result=0;
        for(char i='A';i<='Z';i++)
        {
           if(ms.count(i)>=no_of_minutes)
           {
             result++;
           }
           no_of_minutes++;
        }

        cout<<result<<endl;



    }

}