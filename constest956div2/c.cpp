#include <bits/stdc++.h>
using namespace std;

#define int long long int

vector<int> solve(vector<int> a1, vector<int> a2, vector<int> a3, int req)
{
    int n = a1.size();
    int cur = 0;
    int sum = 0;
    vector<int> ans;
    ans.push_back(cur);
    bool x1 = false, x2 = false, x3 = false;
    for (int i = 0; i < n; i++)
    {
        sum += a1[i];
        cur++;
        if (sum >= req)
        {
            x1 = true;
            break;
        }
    }
    ans.push_back(cur - 1);
    ans.push_back(cur);
    sum = 0;
    for (int i = cur; i < n; i++)
    {
        sum += a2[i];
        cur++;
        if (sum >= req)
        {
            x2 = true;
            break;
        }
    }
    ans.push_back(cur - 1);
    ans.push_back(cur);
    sum = 0;
    for (int i = cur; i < n; i++)
    {
        sum += a3[i];
        cur++;
        if (sum >= req)
        {
            x3 = true;
            break;
        }
    }
    ans.push_back(n-1);
    if (x1 && x2 && x3)
    {
        return ans;
    }
    else
    {
        return {-2};
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t = 1;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> b(n);
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        vector<int> c(n);
        for (int i = 0; i < n; i++)
        {
            cin >> c[i];
        }
        int tot = accumulate(c.begin(),c.end(), 0LL);
        int req = ((tot + 2) / 3);
        vector<int> ans = {-2};
        vector<int> ans1 = solve(a, b, c, req);
        if(ans1.size()!=1)
        {
            cout<<ans1[0]+1<<" "<<ans1[1]+1<<" "<<ans1[2]+1<<" "<<ans1[3]+1<<" "<<ans1[4]+1<<" "<<ans1[5]+1<<endl;
            continue;
        }
        vector<int> ans2 = solve(b, c, a, req);
        if(ans2.size()!=1)
        {
            cout<<ans2[4]+1<<" "<<ans2[5]+1<<" "<<ans2[0]+1<<" "<<ans2[1]+1<<" "<<ans2[2]+1<<" "<<ans2[3]+1<<endl;
            continue;
        }
        vector<int> ans3 = solve(c, a, b, req);
        if(ans3.size()!=1)
        {
            cout<<ans3[2]+1<<" "<<ans3[3]+1<<" "<<ans3[4]+1<<" "<<ans3[5]+1<<" "<<ans3[0]+1<<" "<<ans3[1]+1<<endl;
            continue;
        }
        vector<int> ans4 = solve(a, c, b, req);
        if(ans4.size()!=1)
        {
            cout<<ans4[0]+1<<" "<<ans4[1]+1<<" "<<ans4[4]+1<<" "<<ans4[5]+1<<" "<<ans4[2]+1<<" "<<ans4[3]+1<<endl;
            continue;
        }
        vector<int> ans5 = solve(b, a, c, req);
        if(ans5.size()!=1)
        {
            cout<<ans5[2]+1<<" "<<ans5[3]+1<<" "<<ans5[0]+1<<" "<<ans5[1]+1<<" "<<ans5[4]+1<<" "<<ans5[5]+1<<endl;continue;
        }
        vector<int> ans6 = solve(c, b, a, req);
        if(ans6.size()!=1)
        {
            cout<<ans6[4]+1<<" "<<ans6[5]+1<<" "<<ans6[2]+1<<" "<<ans6[3]+1<<" "<<ans6[0]+1<<" "<<ans6[1]+1<<endl;
            continue;
        }
        else 
        {
            cout<<-1<<endl;
        }
    }

    return 0;
}