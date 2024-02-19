#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int a[n], b[m];

    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < m; i++)
        cin >> b[i];

    int x = k / 2;

    set<int> p, q, r;

    for (int i = 0; i < n; i++)
    {
        if (a[i] <= k)
            p.insert(a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        if (b[i] <= k)
            q.insert(b[i]);
    }
    int sm = 0;
    r = p;
    for (auto xx : p)
    {
        if (q.find(xx) != q.end())
        {
            sm++;
            q.erase(xx);
            r.erase(xx);
        }
    }

    int rr = x - r.size();
    if (rr < 0)
        rr = 0;
    if (sm < rr)
    {
        cout << "NO" << endl;
        return;
    }

    sm -= rr;

    // cout << sm << endl;
    // cout << rr << endl;
    // cout << q.size() << endl;
    // cout << r.size() << endl;
    // cout << x << endl;

    if ((r.size() + rr) < x || (q.size() + sm) < x)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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