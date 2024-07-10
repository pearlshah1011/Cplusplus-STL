#include<bits/stdc++.h>
using namespace std;

bool issafe(int row,int col,vector<string>&temp,int n)
{
    int dupcol=col;
    int duprow=row;
    //upper diagonal
    while(row>=0 && col>=0)
    {
        if(temp[row][col]=='Q')
        {
            return false;
        }
        row--;
        col--;
    }

    col=dupcol;
    row=duprow;
    //left
    while(col>=0)
    {
        if(temp[row][col]=='Q')
        {
            return false;
        }
        col--;
    }

    col=dupcol;
    row=duprow;
    //lower diagonal
    while(row<n && col>=0)
    {
        if(temp[row][col]=='Q')
        {
            return false;
        }
        row++;
        col--;
    }
   
   return true;
}
void solve(int col,vector<string>& temp,vector<vector<string>>&ans,int n)
{
    if(col==n)
    {
        ans.push_back(temp);
        return ;
    }
    for(int row=0;row<n;row++)
    {
        if(issafe(row,col,temp,n)==true)
        {
            temp[row][col]='Q';
            solve(col+1,temp,ans,n);
            temp[row][col]='.';
        }
    }


}
int main()
{
    int n;
    cin>>n;
    vector<vector<string>>ans;
    vector<string>temp(n);
    string s(n,'.');

    for(int i=0;i<n;i++)
    {
        temp[i]=s;
    }

    solve(0,temp,ans,n);

     for(int i=0;i<ans.size();i++)
     {
        for(int j=0;j<ans[0].size();j++)
        {
            cout<<ans[i][j]<<endl;

        }
        cout<<endl;
        
     }

}