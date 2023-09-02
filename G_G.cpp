#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int d, m;
    cin >> d >> m;
    vector<int> v(m);
    for (int i = 0; i < m; i++)
    {
        cin >> v[i];
    }
    int ans = 0;

    int x = 0;
    for (int i = 0; i < m; i++)
    {
        if (x == 0 && v[i] >= 13)
        {
            ans++;
        }
        x += v[i];
        x = x % 7;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}