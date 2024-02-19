#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];
    sort(v.rbegin(), v.rend());

    int sum = 0;
    int ar[n + 1];
    ar[0] = 0;
    for (int i = 0; i < n; i++)
    {
        ar[i + 1] = ar[i] + v[i];
    }
    // for (int i = 0; i <= n; i++)
    // {
    //     cout << ar[i] << " ";
    // }
    // cout << endl;

    int x = 0;
    // cout << x << endl;

    int mx = -1e10;
    int tot=ar[n];

    for (int i = 0; i <= a; i++)
    {
        if (i + b <= n)
            x = ar[b + i];
        else
            x = ar[n];
        x -= ar[i];

        int t = tot-ar[i];
        mx = max(mx, t - 2 * x);
    }
    cout << mx << endl;
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