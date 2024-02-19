#include <bits/stdc++.h>
using namespace std;
#define int long long

bool sortbyCond(const pair<double, double> &a, const pair<double, double> &b)
{
    if (a.first != b.first)
        return (a.first < b.first);
    else
        return (a.second > b.second);
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i});
    }

    sort(v.rbegin(), v.rend(), sortbyCond);

    int ar[n + 5];
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += (v[i].first * i + 1);
    }
    cout << ans << endl;
    for (int i = 0; i < n; i++)
    {
        cout << v[i].second+1 << " ";
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}