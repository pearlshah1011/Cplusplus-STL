#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s,int start,int end)
{
    while(start<=end)
    {
        if(s[start++]!=s[end--])
        {
            return false;
        }
       
    }

    return true;

}
void palindrome_partition(int idx,string s,vector<string>&temp,vector<vector<string>>&ans)
{
    if(idx==s.size())
    {
        ans.push_back(temp);
        return;
    }
    for(int i=idx;i<s.size();i++)
    {
        if(isPalindrome(s,idx,i)==true)
        {
            temp.push_back(s.substr(idx,i-idx+1));
            palindrome_partition(i+1,s,temp,ans);
            temp.pop_back();
        }
    }
}
int main()
{
    string s;
    cin>>s;
    vector<vector<string>>ans;
    vector<string>temp;
    palindrome_partition(0,s,temp,ans);

    for(int i=0;i<ans.size();i++)
    {
        for(int j=0;j<ans[i].size();j++)
        {
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}