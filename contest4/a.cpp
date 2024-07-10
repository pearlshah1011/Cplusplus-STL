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
        int n,m,k;
        cin>>n>>m>>k;
        int b[n];
        int c[m];
        for(int i=0;i<n;i++)
        {
            cin>>b[i];
        }
         for(int i=0;i<m;i++)
        {
            cin>>c[i];
        }
        sort(b,b+n);
        sort(c,c+m);
        
        int count=0;
         if(n<=m)
         {

            for(int i=0;i<n;i++)
            {
                int x=k-b[i];
                if(x>0)
                {
                    for(int j=0;j<m;j++)
                    {
                        if(c[j]<=x)
                        {
                            count++;

                        }
                        else
                        {
                            break;
                        }
                    }
                }
                else
                {
                    break;
                }
            }
         }
         else{
             for(int i=0;i<m;i++)
            {
                int x=k-c[i];
               
                if(x>0)
                { 
                    for(int j=0;j<n;j++)
                    {
                        if(b[j]<=x)
                        {
                            count++;

                        }
                        else
                        {
                            break;
                        }
                    }
                }
               else
               {
                break;
               }
            }
         }
            cout<<count<<endl;
        
        
    }
}