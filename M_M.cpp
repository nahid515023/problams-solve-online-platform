#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    int bc = 1;
    bool ok = 0;
    for (int i = 0; i < n; i++)
    {
        bc = (bc + bc);
        cin >> v[i];
        if (bc < v[i])
        {
            ok = 1;
        }
        bc -= (v[i]);
    }
    if (ok)
    {
        cout << "error" << endl;
    }
    else
    {
        cout << (bc%mod) << endl;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}