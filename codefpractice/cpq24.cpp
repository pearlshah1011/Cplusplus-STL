#include<bits/stdc++.h>
using namespace std;
#include<string.h>

int main()
{
    long long n;
    long long m;
    long long a;
    cin>>n>>m>>a;

    int a_temp=a;
    
    int complete_tiles_breadth=1;
    while(m%a>a)
    {
        complete_tiles_breadth++;
        a=a*complete_tiles_breadth;
    }

    int complete_tiles_length=1;
    while(n%a>a)
    {
        complete_tiles_length++;
        a=a*complete_tiles_length;
    }

    complete_tiles_length=complete_tiles_length;

    int complete_tiles_total=complete_tiles_breadth*complete_tiles_length;

    if(m%a>0)
    {
        complete_tiles_total+=n/a_temp;
    }
    if(n%a>0)
    {
        complete_tiles_total+=m/a_temp;
    }

    cout<<complete_tiles_total<<endl;



}