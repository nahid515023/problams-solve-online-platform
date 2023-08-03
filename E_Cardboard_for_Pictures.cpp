#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int l = 1, r = 1e9;

    while (l <= r)
    {
        int w = (l + r) / 2;
        int ans = 0;

        for (int i = 0; i < n; i++)
        {
            int a = (2 * w) + v[i];
            ans += (a * a);
            if (ans > k)
                break;
        }
        if (ans == k)
        {
            cout << w << endl;
            return;
        }
        if (ans < k)
        {
            l = w + 1;
        }
        else
        {
            r = w - 1;
        }
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