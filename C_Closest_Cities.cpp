#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int a[n + 5];
    vector<int> b(n + 5, 0), c(n + 5, 0);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        if (i == 0)
        {
            b[i] = 1;
            continue;
        }
        int x = a[i] - a[i - 1];
        int y = a[i + 1] - a[i];
        if (x < y)
        {
            b[i] = y;
        }
        else
        {
            b[i] = 1;
        }
    }

    for (int i = n - 1; i > 0; i--)
    {
        if (i == n - 1)
        {
            c[i] = 1;
            continue;
        }
        int x = a[i] - a[i - 1];
        int y = a[i + 1] - a[i];
        if (x > y)
        {
            c[i] = x;
        }
        else
        {
            c[i] = 1;
        }
    }

    vector<int> p1(n + 5, 0), p2(n + 5, 0);

    for (int i = 1; i < n; i++)
    {
        p1[i] = p1[i-1] + b[i-1];
    }
    for (int i = n - 1; i > 0; i--)
    {
        p2[i] = p2[i+1] + c[i];
    }
    int q;
    cin >> q;
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        int ans = 0;
        if (x < y)
        {
            ans = p1[y-1] - p1[x - 1];
        }
        else
        {
            ans = p2[y] - p2[x];
        }
        cout << ans << endl;
    }
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