#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    if (is_sorted(ar, ar + n))
    {
        int mi = 1e11;
        for (int i = 1; i < n; i++)
        {
            int val = (ar[i] + ar[i - 1]) / 2;
            mi = min(val - ar[i - 1] + 1, mi);
        }
        cout << mi << endl;
        // cout << (mi + 1) / 2 << endl;
    }
    else
    {
        cout << 0 << endl;
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