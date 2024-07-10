#include<bits/stdc++.h>
using namespace std;

void combination_sum(int idx,vector<int>&list_arr,int n,vector<int>&A)
{
    for(int i=0;i<list_arr.size();i++)
    {
        cout<<list_arr[i]<<" ";
    }
    cout<<endl;

    for(int i=0;i<A.size();i++)
    {
        if(i>idx && A[i]==A[i-1])
        {
            continue;
        }
        list_arr.push_back(A[i]);
        combination_sum(i+1,list_arr,n,A);
        list_arr.pop_back();

    }
    




}
int main()
{
     int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }

    sort(arr.begin(),arr.end());
  
    vector<int> sum_arr;
    int sum=0;

    combination_sum(0,sum_arr,n,arr);
   
   sort(sum_arr.begin(),sum_arr.end());
    for(int i=0;i<sum_arr.size();i++)
    {
       cout<<sum_arr[i];
    }
   cout<<endl;


   

}