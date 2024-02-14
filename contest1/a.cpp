#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k;
        cin>>k;
        string s;
        
        for(int i=0;i<3;i++)
        {
            s+='a';
        }
        for(int i=2;i>=0;i--)
        { 
            k=k-i;
            if(k>=26)
            {
                s[i]='z';
                k=k-26;
            }
            else
            {
               s[i]=char(k+96);
               k=k-(int(s[i])-97+1);
            }
            if(k==0)
            {
                break;
            }
            k=k+i;
        }

        cout<<s<<endl;
    }
}