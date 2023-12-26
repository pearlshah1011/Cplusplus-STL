#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int k;
    cin>>k;
    int a[n];
    stack<int> s;
    for (int i=0;i<n;i++)
    {
       cin>>a[i];
       s.emplace(a[i]);
    }
    while(s.top()<a[k-1] || s.top()==0  )
    {  
        
        s.pop();
        if(s.size()==0)
        {
            cout<<0 <<endl;
            return 0 ;
        }

    }
    
    cout<<s.size()<<endl;


}
