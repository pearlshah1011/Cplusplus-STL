#include<bits/stdc++.h>
using namespace std;

void permutation(vector<int>&temp,vector<vector<int>>&result,int n,int arr[],vector<bool>&freq)
{
    if(temp.size()==n)
    {
        result.push_back(temp);
        return ;

    }
    for(int i=0;i<n;i++)
    {
        if(freq[i]==false)
        {
            freq[i]=true;
            temp.push_back(arr[i]);
            permutation(temp,result,n,arr,freq);
            temp.pop_back();
            freq[i]=false;

        }

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
   
  vector<vector<int>>result;
  vector<int> temp;
  vector<bool>freq(n,false);
    permutation(temp,result,n,arr,freq);

   for(int i=0;i<result.size();i++)
   {
    for(int j=0;j<n;j++)
    {
         cout<<result[i][j]<<" ";
    }
    cout<<endl;
    
   }

   

}