#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        v.push_back({a, i});
    }

    vector<int> ans(n, 0);
    sort(v.begin(), v.end());

    int pre[n];
    pre[0] = v[0].first;

    for (int i = 1; i < n; i++)
    {
        pre[i] = pre[i - 1] + v[i].first;
    }

    int last = 0;

    for (int i = 0; i < n; i++)
    {
        last = max(last, i);
        int val = pre[last];
        int x = last + 1;
        while (val >= v[x].first && x < n)
        {
            val = val + v[x].first;
            x++;
            last++;
        }
        ans[v[i].second] = last;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
    cout << endl;
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