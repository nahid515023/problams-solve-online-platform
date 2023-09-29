#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    vector<pair<int, int>> v;
    int i = 0, cnt = 1;
    while (i < n - 1)
    {
        if (ar[i] == ar[i + 1])
        {
            cnt++;
        }
        else
        {
            v.push_back({ar[i], cnt});
            cnt = 1;
        }
        i++;
    }
    v.push_back({ar[i], cnt});
    int ans = 0;

    for (int i = 0; i < v.size(); i++)
    {
        int d = 0;
        if (k == v[i].first && v[i].second > 1)
        {
            d += v[i].second;
            int l = i - 1, r = i + 1;
            while (l >= 0 && r < v.size())
            {
                int aa = (v[l].second + v[r].second);
                if (v[l].first == v[r].first && aa > 2)
                {
                    d += aa;
                    l--;
                    r++;
                }
                else
                {
                    break;
                }
            }
        }
        ans = max(ans, d);
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