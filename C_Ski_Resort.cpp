#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k, t;
    cin >> n >> k >> t;
    vector<int> a(n);
    int ans = 0;
    int val = 0;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x > t)
        {
            val = 0;
            cnt = 0;
        }
        else
        {
            cnt++;
        }
        if (cnt >= k)
        {
            val++;
            ans += val;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}