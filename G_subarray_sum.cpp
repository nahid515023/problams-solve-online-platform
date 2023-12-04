#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    map<int, int> mp;
    int ans = 0;
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum += v[i];
        int x = sum - k;
        if (sum == k)
            ans++;
        if (mp.count(x) == 1)
        {
            ans += mp[x];
        }
        mp[sum]++;
    }
    cout << ans << endl;
}

int32_t main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}