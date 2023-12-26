#include<bits/stdc++.h>
using namespace std;
#include<string.h>

int main()
{
   long long int n;
   cin>>n;
   int cnt4=0;
   int cnt7=0;
   while(n!=0)
   {
     if(n%10==4)
     {
        cnt4++;
     }
     else if(n%10==7)
     {
        cnt7++;
     }
     n=n/10;
   }
   int count=cnt4+cnt7;
   int flag=0;
   if(count==0)
   {
    cout<<"NO"<<endl;
    return 0;
   }
   while(count!=0)
   {
    if(count%10==4 || count%10==7)
    {
        flag=1;
        
    }
    else
    {
        flag=0;
        cout<<"NO"<<endl;
        return 0;
    }
    count=count/10;
   }

   cout<<"YES"<<endl;

}
