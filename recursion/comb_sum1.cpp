#include<bits/stdc++.h>
using namespace std;

void combination_sum(int idx,int target,vector<int>list_arr,int n,int arr[])
{
     if(idx==n)
     {
        if(target==0)
        {

            for(int i=0;i<list_arr.size();i++)
            {
                cout<<list_arr[i]<<" ";

            }
            cout<<endl;
        }
        return ;
     }

     if(arr[idx]<=target)
     {
        
        list_arr.push_back(arr[idx]);
        combination_sum(idx,target-arr[idx],list_arr,n,arr);

        //while backtracking we remove that element
        list_arr.pop_back();

     }

     combination_sum(idx+1,target,list_arr,n,arr);


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
    int target;
    cin>>target;
    vector<int> list_arr;

    combination_sum(0,target,list_arr,n,arr);



   

}