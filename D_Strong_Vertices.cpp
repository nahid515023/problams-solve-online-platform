#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];
    int d[n];
    int mi = 1e12;
    for (int i = 0; i < n; i++)
    {
        d[i] = b[i] - a[i];
        mi = min(mi, d[i]);
    }
    int cnt = count(d, d + n, mi);
    cout << cnt << endl;
    for (int i = 0; i < n; i++)
    {
        if (d[i] == mi)
            cout << i + 1 << " ";
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