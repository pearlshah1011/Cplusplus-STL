#include<bits/stdc++.h>
using namespace std;

bool issafe(int node,int color[],bool graph[101][101],int num_nodes,int col )
{
    for(int k=0;k<num_nodes;k++)
    {
        if(k!=node && graph[k][node]==1 && color[k]=col)
        {
            return false;
        }
    }

    return true;
}
bool solve(int node,int color[],int m,int num_nodes,bool graph[101][101])
{
    if(node==num_nodes)
    {
        return true;
    }

    for(int col=1;col<=m;col++)
    {
        if(issafe(node,color,graph,num_nodes,col))
        {
            color[node]=col;
            if(solve(node+1,color,m,num_nodes,graph))
            {
                return true;
            }
            else
            {
                color[node]=0;
            }
        }
    }

    return false;
}
int main()
{
    bool graph[101][101];
    int m;
    int num_nodes;
    int color[num_nodes]={0};
    if(solve(0,color,m,num_nodes,graph)==true)
    {
        cout<<"possible";
    }

}