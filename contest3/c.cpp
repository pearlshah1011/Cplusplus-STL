#include<bits/stdc++.h>
using namespace std;

int sumofdig(int n)
{  int sum=0;
    while(n>0)
    {
        int last_dig=n%10;
        sum+=last_dig;
        n=n/10;
    }
    return sum;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int ans=0;
        if(n<10)
        {
            ans=n*(n+1)/2;
        }
        else
        {
            ans=9*(10)/2;
            int numoftens=n/10;
            ans=(ans*numoftens);
            if(n%10!=0)
            {    int t=sumofdig(n-(n%10));
                 ans+=t;
                for(int i=n-n%10+1;i<=n;i++)
                {
                   t++;
                   ans+=t;
                   

                }
                
              
            }
           
            
        }
        cout<<ans<<endl;
    }
}