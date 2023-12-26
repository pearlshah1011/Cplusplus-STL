#include<bits/stdc++.h>
using namespace std;
#include<string.h>
int countDigit(int n) 
{ 
    if (n/10 == 0) 
        return 1; 

    return 1 + countDigit(n / 10); 
} 
int main()
{
    int k;
    int n;
    cin>>n;
    cin>>k;
    while(k--)
    {
        if(countDigit(n)>1)
        {
            if(n%10==0)
            {
               n= n/10;
            }
            else
            {
                n=n-1;
            }
        }
        else
        {
            n=n-1;
        }
    }

    cout<<n<<endl;
}