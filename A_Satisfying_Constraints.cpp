#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int x = 0, y = 1e9, z = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
        {
            x = max(x, b);
        }
        else if (a == 2)
        {
            y = min(y, b);
        }
        else
        {
            v.push_back(b);
        }
    }
    // cout << x << " " << y << endl;

    int ans = (y - x) + 1;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i] >= x && v[i] <= y)
        {
            ans -= 1;
        }
    }
    if (ans < 0)
        ans = 0;
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