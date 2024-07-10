#include<bits/stdc++.h>
using namespace std;
// method 1
// void add(int cnt,int n,int sum)
// {
//     if(cnt>n)
//     {
//         cout<<sum<<endl;
//         return ;
//     }

//     sum+=cnt;
//     add(cnt+1,n,sum);
   


// }


//method 2
int add(int n)
{
    if (n==1)
    {
        return 1;
    }
    else
    {
        return n+add(n-1);
    }
}
int main()
{
    int cnt=1;
    int n;
    cin>>n;
    int sum=0;
    int ans=add(n);
    cout<<ans;
}