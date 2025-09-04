#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int r, y, b;
    cin >> r >> y >> b;

    int sum = r + y + b;
    int ans = (n / sum) * 3;
    n -= (n / sum) * sum;

    vector<int> v;
    v.push_back(r);
    v.push_back(y);
    v.push_back(b);

    sort(v.begin(), v.end());
    if (v[0] <= n)
    {
        ans++;
        n -= v[0];
    }
    if (v[1] <= n)
    {
        ans++;
        n -= v[0];
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