#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int mx = max_element(v.begin(), v.end()) - v.begin();
    int cnt = 0;

    for (int i = mx; i > 0; i--)
    {
        swap(v[i], v[i - 1]);
        cnt++;
    }

    int mi = *min_element(v.begin(), v.end());
    int m = 0;
    for (int i = 0; i < n; i++)
    {
        if (mi == v[i])
        {
            m = i;
        }
    }
    mi = m;
    // cout << mx << " " << mi << endl;
    for (int i = mi; i < n - 1; i++)
    {
        swap(v[i], v[i + 1]);
        cnt++;
    }
    cout << cnt << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
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