#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        char s[n][n];
        for (int i=0;i<n;i++)
        {  
            for(int j=0;j<n;j++)
            {

              cin>>s[i][j];
            }
            
        }
        int flag=0;
        int i;
        int j;
        for ( i=0;i<n;i++)
        {  
            for(j=0;j<n;j++)
            {
              if(s[i][j]=='1')
              {
                flag=1;
                break;

              }
            }
            if(flag==1)
            {
                break;
            }
            
        }
        
        int cnt_rowwise=0;
        int tempi=i;
        int tempj=j;
        
        while((tempi<n) && s[tempi][j]!='0')
        {   
            cnt_rowwise++;
            tempi++;

        }
        
        int cnt_colwise=0;
        while(s[i][j]!='0'&& j<n)
        {   
            cnt_colwise++;
            j++;

        }
      
        if(cnt_colwise==cnt_rowwise)
        {
            cout<<"SQUARE"<<endl;
        }
        else
        {
            cout<<"TRIANGLE"<<endl;
        }


    }

}