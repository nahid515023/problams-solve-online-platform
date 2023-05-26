#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int m, s;
    cin >> m >> s;
    if ((s == 0 && m > 1) || s > m * 9)
    {
        cout << "-1 -1\n";
        return;
    }
     if ((s == 0 && m == 1))
    {
        cout << "0 0\n";
        return;
    }
    vector<int> v;
    bool ok = 0;
    while (s > 0 && m > 0)
    {
        m--;
        if (s < 9)
        {
            v.push_back(s);
            break;
        }
        v.push_back(9);
        s -= 9;
    }
    while (m > 0)
    {
        v.push_back(0);
        m--;
    }
    auto it = v;
    sort(v.begin(), v.end());
    if (v[0] == 0)
    {
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] != 0)
            {
                v[i]--;
                break;
            }
        }
        v[0] = 1;
    }
    for (auto &x : v)
        cout << x;
    cout << " ";
    for (auto &x : it)
        cout << x;
    cout << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}