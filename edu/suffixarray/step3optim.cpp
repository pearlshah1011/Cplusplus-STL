#include<bits/stdc++.h>
using namespace std;
#include<string.h>
 int binarySearch(string t, vector<int> p, string x, int n)
{
    int l = 0;
    int r = n - 1;

    // Loop to implement Binary Search
    while (l <= r)
    {
        int m = l + (r - l) / 2;
        int res = -1000;
        string temp = t.substr(p[m], n - p[m]);
        temp = temp.substr(0, temp.size() - 1);
        temp = temp.substr(0, x.length());
        if (x == (temp))
            res = 0;

        if (res == 0)
            return m;

        if (x > (temp))
            l = m + 1;
        else
            r = m - 1;
    }

    return -1;
}

 //sorts array p by the keys stored in array c
void count_sort(vector<int>&p,vector<int>&c)
{  
    int n=p.size();
    {
    vector<int> cnt(n);
    for(auto x:c )
    {
        cnt[x]++;
    }
     vector <int>p_new(n);
     vector<int> pos(n);
     pos[0]=0;
     for(int i=1;i<n;i++)
     {
        pos[i]=pos[i-1]+cnt[i-1];
     }
     for(auto x:p)
     { //key of first elem equal to class of left half
        int i=c[x];
        p_new[pos[i]]=x;
        pos[i]++;
     }
     p=p_new;
    }

   
}    
 
int main()
{
    string t;
    cin>>t;
    t=t+"$";
    int n= t.size();
     vector<int>p(n);
     vector<int>c(n);
   //for k=0
   int k=0;
   //charcters and positions
       {     vector <pair<char,int>> a(n);
            for(int i=0;i<n;i++) 
            {
                a[i]={t[i],i};
            }
        
        sort(a.begin(),a.end());
        
        //now p[n] is a.second c[n]is to be found
            for(int i=0;i<n;i++) 
            {
                p[i]=a[i].second;
            }
            c[p[0]]=0;
            for(int i=1;i<n;i++)
            {
                if(a[i].first==a[i-1].first)
                {
                    c[p[i]]=c[p[i-1]];
                }
                else
                {
                    c[p[i]]=c[p[i-1]]+1;
                }
            }
  
       }
  // now for other k
  
  while((1<<k)<n)
  {
    // vector <pair<pair<int,int>,int>>a(n);
    // //making left and right part
    // for (int i=0;i<n;i++)
    // {
    //    a[i]={{c[i],c[(i+(1<<k))%n]},i};
       
    // }
    //sort by second half
    for(int i=0;i<n;i++)
    {
        p[i]=(p[i]-(1<<k)+n)%n;
    }
    //shift the string

    count_sort(p,c);
         
        //now p[n] is a.second c[n]is to be found
            vector<int> c_new(n);

            c_new[p[0]]=0;
            for(int i=1;i<n;i++)
            {  
                 pair<int,int> prev={c[p[i-1]],c[(p[i-1]+(1<<k))%n]};
                pair<int,int> now={c[p[i]],c[(p[i]+(1<<k))%n]};
                if(prev==now)
                {
                    c_new[p[i]]=c_new[p[i-1]];
                }
                else
                {
                    c_new[p[i]]=c_new[p[i-1]]+1;
                }
            }
            c=c_new;
    k++;
 
  }

  int n_new;
    cin >> n_new;
    int delta = n_new;

    while (delta--)
    {
        string s;
        cin >> s;
       
        // if(flag==0)
        // {
        //     cout<<"No\n";
        // }
        // else
        // {
        //     cout<<"Yes\n";
        // }
        int result = binarySearch(t, p, s, n);
        if (result == -1)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }

    }
    
  

 
 
}