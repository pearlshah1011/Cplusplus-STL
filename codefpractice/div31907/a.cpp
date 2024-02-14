#include<bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int cnt_up=int('8')-int(s[1]);
        int cnt_down=int(s[1])-int('1');
        int cnt_right=int('h')-int(s[0]);
        int cnt_left=int(s[0])-int('a');
        int up_start=cnt_down+2;
        //printing down elements
        int i=1;
        while(cnt_down--)
        {
            cout<<s[0]<<i<<"\n";
            i++;
        }
       
        while(cnt_up--)
        {
             cout<<s[0]<<up_start<<"\n";
             up_start++;
        }
        char m='a';
        while(cnt_left--)
        {
            cout<<m<<s[1]<<'\n';
            m++;

        }
        char p=s[0]+1;
        while(cnt_right--)
        {
            cout<<p<<s[1]<<'\n';
            p++;
        }

        
    }
}