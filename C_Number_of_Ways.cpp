#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n + 1, 0);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        v[i] += v[i - 1];
    }
    if (v[n] % 3 != 0)
    {
        cout << "0\n";
        return;
    }
    int x = 2 * v[n] / 3;
    int ans = 0, cnt = 0;
    for (int i = 1; i < n; i++)
    {
        if (v[i] == x)
        {
            ans += cnt;
        }
        if (v[i] == v[n] / 3)
        {
            cnt++;
        }
    }
    cout << ans << endl;
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