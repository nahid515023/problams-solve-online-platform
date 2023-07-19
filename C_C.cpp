#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int ans = 0;
    int mi = v[n - 1];
    int i = n - 2;
    while (i >= 0)
    {
        if (mi > v[i])
        {
            mi = v[i];
        }
        else
        {
            if (mi == 0)
            {
                cout << 1 << endl;
                return;
            }
            ans += abs(v[i] - mi) + 1;
            mi = abs(mi - 1);
        }
        i--;
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}