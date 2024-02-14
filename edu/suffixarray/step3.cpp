#include <bits/stdc++.h>
using namespace std;
#include <string.h>
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

int main()
{
    string t;
    cin >> t;
    t = t + "$";
    int n = t.size();
    vector<int> p(n);
    vector<int> c(n);
    // for k=0
    int k = 0;
    // characters and positions
    vector<pair<char, int>> a(n);
    for (int i = 0; i < n; i++)
    {
        a[i] = {t[i], i};
    }

    sort(a.begin(), a.end());

    // now p[n] is a.second c[n]is to be found
    for (int i = 0; i < n; i++)
    {
        p[i] = a[i].second;
    }
    c[p[0]] = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i].first == a[i - 1].first)
        {
            c[p[i]] = c[p[i - 1]];
        }
        else
        {
            c[p[i]] = c[p[i - 1]] + 1;
        }
    }

    // now for other k

    while (pow(2, k) < n)
    {
        vector<pair<pair<int, int>, int>> a(n);
        // making left and right part
        for (int i = 0; i < n; i++)
        {
            a[i] = {{c[i], c[(i + (1 << k)) % n]}, i};
        }
        sort(a.begin(), a.end());

        // now p[n] is a.second c[n]is to be found
        for (int i = 0; i < n; i++)
        {
            p[i] = a[i].second;
        }
        c[p[0]] = 0;
        for (int i = 1; i < n; i++)
        {
            if (a[i].first == a[i - 1].first)
            {
                c[p[i]] = c[p[i - 1]];
            }
            else
            {
                c[p[i]] = c[p[i - 1]] + 1;
            }
        }
        k++;
    }

    int n_new;
    cin >> n_new;
    int delta = n_new;

    while (delta--)
    {
        string s;
        cin >> s;
        int flag = 0;
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