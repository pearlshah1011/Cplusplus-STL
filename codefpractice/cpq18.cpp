#include<bits/stdc++.h>
using namespace std;

int countUniqueDigits(int N) 
{ 
   
    int res = 0; 
    int cnt[10] = { 0 }; 
    while (N > 0) { 
  
       
        int rem = N % 10; 
        cnt[rem]++; 
        N = N / 10; 
    }
    for (int i = 0; i < 10; i++) { 

        if (cnt[i] == 1) { 
            res++; 
        } 
    } 
    return res; 
}

int main()
{
   int n;
   cin>>n;
   n=n+1;
   while(countUniqueDigits(n)!=4)
   {
    n++;
   }
   cout<<n;
}