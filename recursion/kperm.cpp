#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int k;
    cin>>n>>k;
    vector<int> num;
    int fact=1;
    for(int i=1;i<n;i++)
    {
        fact=fact*i;
        num.push_back(i);
    
    }
    num.push_back(n);

    k=k-1;
    string ans;
    while(1)
    {
        ans=ans+to_string(num[k/fact]);
        num.erase(num.begin()+ k/fact);
        if(num.size()==0)
        {
            break;
        }
        k=k%fact;
        fact=fact/(num.size());
    }

    cout<<ans<<endl;
}