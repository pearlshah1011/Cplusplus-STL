#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string arr[3];
        for(int i=0;i<3;i++)
        {
            cin>>arr[i];
        }
         for(int i=0;i<3;i++)
        {
            if(int(arr[i][0])+int(arr[i][1])+int(arr[i][2])!=198)
            {
                  if((198-int(arr[i][0])-int(arr[i][1])-int(arr[i][2]))==4)
                  {
                    cout<<"C\n";
                  }
                  else if((198-int(arr[i][0])-int(arr[i][1])-int(arr[i][2]))==3)
                  {
                    cout<<"B\n";
                  }
                  else
                  {
                    cout<<"A\n";
                  }
            }
        }
        
    }
}