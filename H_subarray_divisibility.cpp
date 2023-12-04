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

    map<int, int> mp;
    int ans = 0;
    int sum = 0;
    mp[0] = 1;

    for (int i = 0; i < n; i++)
    {
        sum = (sum + v[i]);
        int r = sum % n;
        if (r < 0)
            r += n;
        if (mp.count(r) == 1)
            ans += mp[r];
        mp[r]++;
    }
    cout << ans << endl;
}

int32_t main()
{
    // freopen("input.txt", "r", stdin);
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}