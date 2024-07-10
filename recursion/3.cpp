#include<bits/stdc++.h>
using namespace std;

void print(int cnt)
{
    if(cnt>10)
    {
        return ;
    }

    
    print(cnt+1);
    cout<<cnt<<endl;


}
int main()
{
    int cnt=1;
    print(cnt);
}