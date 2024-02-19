#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());

    auto it = unique(v.begin(), v.end());
    v.resize(distance(v.begin(), it));
    int ans = 0;
    for (auto x : v)
    {
        int l = lower_bound(v.begin(), v.end(), x) - v.begin();
        int r = upper_bound(v.begin(), v.end(), x + n - 1) - v.begin();
        int a = r - l;
        ans = max(a, ans);
        // cout << a << " ";
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