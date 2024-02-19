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

    int l = 0, h = n - 1;
    int a = 1, b = 1;
    while (v[l] == v[l + 1])
    {
        l++;
        a++;
    }
    while (v[h] == v[h - 1])
    {
        h--;
        b++;
    }

    if (v[0] == v[n - 1])
    {
        cout << max(0LL, n - a - b) << endl;
    }
    else
    {
        cout << n - max(a, b) << endl;
    }
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