#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        mp[a]++;
    }

    while (1)
    {
        if (mp.size() == 1)
        {
            cout << 0 << endl;
            return;
        }
        auto mn = mp.begin();
        auto mx = --mp.end();

        if (mn->second <= mx->second)
        {
            auto it = ++mp.begin();
            int d = (it->first - mn->first) * mn->second;
            if (d <= k)
            {
                k -= d;
                it->second += mn->second;
                mp.erase(mn);
            }
            else
            {
                int ans = mx->first - (mn->first + (k / mn->second));
                cout << ans << endl;
                return;
            }
        }
        else
        {
            auto it = mx;
            --it;
            int d = (mx->first - it->first) * mx->second;
            if (d <= k)
            {
                k -= d;
                it->second += mx->second;
                mp.erase(mx);
            }
            else
            {
                int ans = (mx->first - (k / mx->second)) - mn->first;
                cout << ans << endl;
                return;
            }
        }
    }
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