#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(pair<int, int> &a, pair<int, int> &b)
{
    return a.second < b.second;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;
    vector<int> a(n), b(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }

    for (int i = 0; i < n; i++)
    {
        v.push_back({a[i], b[i]});
    }
    sort(v.begin(), v.end(), cmp);

    int l = 0, r = n - 1;
    int tot = k;
    while (l < r)
    {
        int x = v[l].first;
        int y = min(v[l].second, k);
        int aa = min(r - l - 1, x - 1);
        l++;
        r -= aa;
        tot += (y * (aa + 1));
    }
    cout << tot << endl;
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