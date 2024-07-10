#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;

        string s;
        cin>>s;
        
        int i=0;
        vector<int> freq(7,0);
        
        while(s[i]!='\0')
        {
            freq[s[i]-'A']++;
            i++;
        }
        int count=0;
        
      for(int i=0;i<freq.size();i++)
      {
        if(freq[i]<m)
        {  int n=m-freq[i];
            count=count+n;
        }
      }

       cout<<count<<endl;

    }
}