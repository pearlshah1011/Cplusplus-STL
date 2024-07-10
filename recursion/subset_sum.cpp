#include<bits/stdc++.h>
using namespace std;

void combination_sum(int idx,vector<int>&sum_arr,int n,vector<int>&A,int sum)
{
    
    if(idx==n)
    {
        sum_arr.push_back(sum);
        return ;

    }

    //not take 
    combination_sum(idx+1,sum_arr,n,A,sum);

    //take
    combination_sum(idx+1,sum_arr,n,A,sum+A[idx]);




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

    combination_sum(0,sum_arr,n,arr,sum);
   
   sort(sum_arr.begin(),sum_arr.end());
    for(int i=0;i<sum_arr.size();i++)
    {
       cout<<sum_arr[i];
    }
   cout<<endl;


   

}