#include<bits/stdc++.h>
using namespace std;

void print(int cnt)
{
    if(cnt>10)
    {
        return ;
    }

    cout<<cnt<<endl;
    print(cnt+1);


}
int main()
{
    int cnt=1;
    print(cnt);
}