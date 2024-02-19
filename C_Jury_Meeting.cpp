#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    int mx = *max_element(ar, ar + n);
    int cmx = count(ar, ar + n, mx);
    int k = count(ar, ar + n, mx - 1);
    int val = 1, s = 1;
    for (int i = 1; i <= n; i++)
    {
        val = val * i % 998244353;
        if (i != k + 1)
            s = s * i % 998244353;
    }
    if (cmx == 1)
        val = (val - s + 998244353) % 998244353;
    cout << val << endl;
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