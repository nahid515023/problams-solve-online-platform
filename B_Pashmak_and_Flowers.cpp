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
    sort(v.begin(), v.end());

    int mi = v[0];
    int mx = v[n - 1];
    int cnt = 0, cnt1 = 0;

    for (int i = 0; i < n; i++)
    {
        if (mi == v[i])
        {
            cnt++;
        }
        if (mx == v[i])
        {
            cnt1++;
        }
    }
    int ans=cnt*cnt1;
    
    if (mi == mx)
    {
        ans = n*(n-1)/2;
    }
    cout << mx - mi << " " << ans << endl;
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