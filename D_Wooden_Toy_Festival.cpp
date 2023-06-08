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
    int l = -1, r = 1e9;
    int ans = 0;
    while (r - l > 1)
    {
        int m = (l + r) / 2;
        int i = 0;
        while (i + 1 < n && v[i + 1] - v[0] <= 2 * m)
        {
            i++;
        }
        int j = n - 1;
        while (j >= 0 && v[n - 1] - v[j - 1] <= 2 * m)
        {
            j--;
        }
        i++;
        j--;
        if (i > j || v[j] - v[i] <= 2 * m)
        {
            r = m;
        }
        else
        {
            l = m;
        }
    }
    cout << r << endl;
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