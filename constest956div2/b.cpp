#include <bits/stdc++.h>
using namespace std;

#define int long long int


bool check(vector<vector<int>> a, vector<vector<int>> b)
{
    int n = a.size();
    int m = a[0].size();
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < m-1; j++)
        {
            int diff=(b[i][j]-a[i][j]+3)%3;
            a[i][j]=b[i][j];
            a[i+1][j]+=2*diff;
            a[i+1][j]%=3;
            a[i][j+1]+=2*diff;
            a[i][j+1]%=3;
            a[i+1][j+1]+=diff;
            a[i+1][j+1]%=3;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if(a[i][j]!=b[i][j])
            {
                return false;
            }
        }
    }
    return true;
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> a(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char c;
                cin >> c;
                a[i][j] = c - '0';
            }
        }
        vector<vector<int>> b(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                char c;
                cin >> c;
                b[i][j] = c - '0';
            }
        }
        if (check(a, b))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }

    return 0;
}