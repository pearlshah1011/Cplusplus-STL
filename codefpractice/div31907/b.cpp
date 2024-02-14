#include <bits/stdc++.h>
using namespace std;
#include <string>

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        string p="";
        cin >> s;
        int i = s.length()-1;
        //int last_capital_index=-1;
        //int last_small_index=-1;
        int cnt_small_b=0;
        int cnt_big_b=0;

        while(i>-1)
        {  int flag=0;
            if(s[i]=='B')
            { flag=1;
                cnt_big_b++;
            }

            if(s[i]=='b')
            {  flag=1;
                cnt_small_b++;
            }
            if(flag==0)
            {  if(isupper(s[i]))
                {
                    if(cnt_big_b==0)
                    {
                        p+=s[i];
                    }
                    else
                    {
                        cnt_big_b--;
                    }
                }
                else
                {
                    if(cnt_small_b==0)
                    {
                      p+=s[i];
                    }
                    else
                    {
                        cnt_small_b--;
                    }
                }
                
            }
           
            
            i--;

        }
        reverse(p.begin(),p.end());
        cout<<p<<endl;
    
    }
}