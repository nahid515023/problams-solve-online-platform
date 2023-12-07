#include <bits/stdc++.h>
using namespace std;
#define int long long

bool ck(vector<pair<int, int>> &v, int n, int k)
{
    int l_pos = 0;
    int r_pos = 0;
    for (int i = 0; i < n; i++)
    {
        if (r_pos <= v[i].first)
        {
            if (r_pos + k < v[i].first)
                return 0;
            l_pos = v[i].first;
            r_pos = min(r_pos + k, v[i].second);
        }
        else if (l_pos >= v[i].second)
        {
            if (l_pos - k > v[i].second)
                return 0;
            l_pos = max(l_pos - k, v[i].first);
            r_pos = v[i].second;
        }
        else
        {
            l_pos = max(l_pos - k, v[i].first);
            r_pos = min(r_pos + k, v[i].second);
        }
    }
    return 1;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    int l = 0, h = 1e9 + 7;
    int ans = 0;

    while (l <= h)
    {
        int k = (l + h) / 2;

        if (ck(v, n, k))
        {
            ans = k;
            h = k - 1;
        }
        else
        {
            l = k + 1;
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