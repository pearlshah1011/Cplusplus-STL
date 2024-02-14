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
        long long arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int cnt_negative=0;
        int flag=0;
         for(int i=0;i<n;i++)
        {  if(arr[i]==0)
            {   
                flag=1;
             
                
            }
           if(arr[i]<0)
           {
              cnt_negative++;
           }
          
        }
        if(flag==1)
        {
            cout<<"0"<<endl;
        }
        else
        {
           if(cnt_negative%2==0)
            {
                cout<<"1"<<endl;
                cout<<"1"<<" "<<"0"<<endl;
            }
            else
            {   
                cout<<"0"<<endl;
            }
        }
        
        
        



    }
}