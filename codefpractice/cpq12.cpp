#include<bits/stdc++.h>
using namespace std;
#include<string.h>

int main(){
    string s;
    cin>>s;
     int i=0;
     int upcase=0;
     int lowcase=0;

    while(s[i]!=NULL)
    {
        if(isupper((s[i])))
        {
           upcase++;
        }
        else
        {
            lowcase++;
        }
        i++;
    }

   
   if(lowcase>=upcase)
   {
    transform(s.begin(),s.end(),s.begin(),::tolower);
   }
   else
   {
     transform(s.begin(),s.end(),s.begin(),::toupper);
   }
   cout<<s<<endl;
}