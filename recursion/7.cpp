
#include<bits/stdc++.h>
using namespace std;

void subsequence(int idx,vector<int> arr_temp,int arr[],int n,int sum,int k)
{


    if(idx==n)
    {
        if(sum==k)
        {
            for(int i=0;i<arr_temp.size();i++)
            {
                cout<<arr_temp[i]<<" ";
            }
        cout<<endl;

        }
        
        return ;
    }

     //take
    arr_temp.push_back(arr[idx]);
    sum+=arr[idx];
    subsequence(idx+1,arr_temp,arr,n,sum,k);
    
    //not take
    arr_temp.pop_back();
    sum-=arr[idx];
    subsequence(idx+1,arr_temp,arr,n,sum,k);


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
    int sum=0;
    int k;
    cin>>k;

    vector<int> arr_temp;
    subsequence(0,arr_temp,arr,n,sum,k);
   
}