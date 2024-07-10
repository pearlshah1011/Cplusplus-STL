#include<bits/stdc++.h>
using namespace std;

void rev(int idx,int arr[],int n)
{


    if(idx>=n/2)
    {
    return ;
    }
    swap(arr[idx],arr[n-idx-1]);    
    rev(idx+1,arr,n);


}

int main()
{
  
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    rev(0,arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i];
    }
}