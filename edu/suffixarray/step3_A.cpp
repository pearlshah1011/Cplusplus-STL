#include <bits/stdc++.h>
using namespace std;
#include <string.h>

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
    // charcters and positions
    {
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

    // string *arr = new string[n];
    // for (int i = 0; i < n; i++)
    // {
    //     arr[i] = t.substr(p[i], n - p[i]);
    //     arr[i] = arr[i].substr(0, arr[i].size() - 1);
    // }

    int n_new;
    cin >> n_new;
    int delta = n_new;
    while (delta--)
    {
        string s;
        cin >> s;
        // int result=binarySearchString(arr,s,n_new);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            string temp;
            temp = t.substr(p[i], n - p[i]);
            temp = temp.substr(0, temp.size() - 1);
            if (temp.substr(0, s.length()) == s)
            {
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
            cout << "No\n";
        }
        else
        {
            cout << "Yes\n";
        }
    }
}