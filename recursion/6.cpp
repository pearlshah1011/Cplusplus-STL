#include<bits/stdc++.h>
using namespace std;

int palindrome(int idx,string s,int n)
{


    if(idx>=n/2)
    {
       return 1;
    }
    if(s[idx]!=s[n-idx-1])
    {
        return 0;
    }
    else
    {
        return palindrome(idx+1,s,n);
    }

     
   


}

int main()
{
  
    
   string s;
   cin>>s;
    int n=s.size();
    
    int boolean=palindrome(0,s,n);
    if(boolean==1)  
    {
        cout<<"is palindrome";
    }
    else
    {
        cout<<"not palindrome";
    }
    
    
}