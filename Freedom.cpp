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
    int ans = 0;
    map<int, int> mp;
    for (int i = n - 1; i >= 0; i--)
    {
        if (v[i]==3 || (v[i] % (v[i] - 3)) != 0)
        {
            mp[v[i]]++;
            continue;
        }
        int y = v[i] / (v[i] - 3);
        if (mp.find(y) != mp.end())
        {
            ans += mp[y];
        }
        mp[v[i]]++;
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