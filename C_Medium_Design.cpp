#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int q, n;
    cin >> q >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        ar[i] = 0;

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        l--;
        r--;
        for (int i = l; i <= r; i++)
            ar[i]++;
    }
    for(int i=0;i<n;i++) ar[i]
    auto x = minmax_element(ar, ar + n);
    cout << x.second - x.first << endl;
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