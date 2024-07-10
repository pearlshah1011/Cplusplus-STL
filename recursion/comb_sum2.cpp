#include<bits/stdc++.h>
using namespace std;

void combination_sum(int idx,int target,vector<int>list_arr,int n,int arr[])
{
    if(target==0)
    {
        for(int i=0;i<list_arr.size();i++)
        {
            cout<<list_arr[i]<<" ";
        }
        cout<<endl;

        return ;
    }

    for(int i=idx;i<n;i++)
    {
        if(i>idx && arr[i]==arr[i-1])
        {
            continue;
        }
        if(arr[i]>target)
        {
            break;
        }
        list_arr.push_back(arr[i]); 
        combination_sum(i+1,target-arr[i],list_arr,n,arr);
        list_arr.pop_back();
    }


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

    sort(arr.begin(),arr.end());
    int target;
    cin>>target;
    vector<int> list_arr;

    combination_sum(0,target,list_arr,n,arr);



   

}