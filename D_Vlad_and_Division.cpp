#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;

    map<string, int> mp;

    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        bitset<31> bt(a);
        string s = bt.to_string();
        mp[s]++;
    }

    int ans = 0;

    for (auto [x, y] : mp)
    {
        bitset<31> bt(x);
        bt = ~bt;
        string s = bt.to_string();

        if (mp.find(x) != mp.end())
        {
            int mi = min(mp[s], mp[x]);
            int mx = max(mp[s], mp[x]);
            ans += (mx - mi) + mi;
            mp[x] = 0;
            mp[s] = 0;
        }
        else
        {
            ans += mp[s];
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