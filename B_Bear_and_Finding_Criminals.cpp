#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    int l = k - 1, r = k - 1;
    int ans = 0;

    while (l >= 0 || r < n)
    {
        if ((v[l] == 1) && (v[r] == 1))
        {
            ans += 2;
        }
        else if ((v[l] == 1 || l < 0) && (v[r] == 1 || r >= n))
        {
            ans++;
        }
        l--;
        r++;
    }
    if (v[k - 1] == 1)
    {
        ans--;
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}