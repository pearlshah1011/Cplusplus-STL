#include<bits/stdc++.h>
using namespace std;

void permutation(int idx,vector<int>&arr,vector<vector<int>>&result,int n)
{
    if(idx==n)
    {
        result.push_back(arr);
        return ;

    }
    for(int i=idx;i<n;i++)
    {
        swap(arr[idx],arr[i]);
        permutation(idx+1,arr,result,n);
        swap(arr[idx],arr[i]);

    }


}
int main()
{
     int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
   
  vector<vector<int>>result;
    permutation(0,arr,result,n);

   for(int i=0;i<result.size();i++)
   {
    for(int j=0;j<n;j++)
    {
         cout<<result[i][j]<<" ";
    }
    cout<<endl;
    
   }

   

}