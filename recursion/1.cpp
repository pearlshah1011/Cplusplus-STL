#include<bits/stdc++.h>
using namespace std;

void print(int cnt)
{
    if(cnt==5)
    {
        return ;
    }

    cout<<"Pearl";
    print(cnt+1);


}
int main()
{
    int cnt=0;
    print(cnt);
}