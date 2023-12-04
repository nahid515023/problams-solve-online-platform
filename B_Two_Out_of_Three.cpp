#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> mp;

    for (auto &x : v)
    {
        cin >> x;
        mp[x]++;
    }

    int cnt = 0;
    int p = 0, q = 0;

    for (auto [x, y] : mp)
    {
        if (y > 1)
        {
            cnt++;
            if (p == 0)
                p = x;
            else
            {
                q = x;
            }
        }
    }

    if (cnt < 2)
    {
        cout << -1 << endl;
        return;
    }

    map<int, int> aa;
    bool ok = 0;

    // cout << p << " " << q << endl;

    for (int x : v)
    {
        if (q == x)
        {
            cout << 3 << " ";
            q = 0;
        }
        else if (x == p)
        {
            p = 0;
            cout << 2 << " ";
        }
        else
        {
            cout << 1 << " ";
        }
    }
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}