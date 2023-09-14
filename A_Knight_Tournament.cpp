#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    vector<int> v(n + 1, 0);
    set<int> s;
    for (int i = 1; i <= n; i++)
    {
        s.insert(i);
    }
    while (m--)
    {
        int l, r, x;
        cin >> l >> r >> x;
        auto it = s.lower_bound(l);
        while (*it <= r && it != s.end())
        {
            if (*it == x)
            {
                it++;
                continue;
            }
            int val = *it;
            it++;
            s.erase(val);
            v[val] = x;
        }
    }
    for (int i = 1; i <= n; i++)
        cout << v[i] << " ";
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