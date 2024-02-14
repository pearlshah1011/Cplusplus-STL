#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int countDigit(long long n) 
{ 
    if (n == 0) 
        return 1; 
    int count = 0; 
    while (n != 0) { 
        n = n / 10; 
        ++count; 
    } 
    return count; 
} 
  
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        int cnt=0;
        int flag=0;
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {  if(n<=2 && n%6!=0)
                {
                    cout<<-1<<endl;
                    flag=1;
                   
                }
             while(n>0)
            {   
                
                if(n%6==0)
                {
                    n=n/6;
                }
                else
                {
                    n=n*2;
                }
                if(n==1)
                {
                    break;
                }
                cnt++;
            }
          
            if(flag!=1 && n==1)
            {
            cout<<cnt+1<<endl;
            }
            else if(flag!=1 && n!=1)
            {
            cout<<-1<<endl;
            }
        
        }
       
    }
}