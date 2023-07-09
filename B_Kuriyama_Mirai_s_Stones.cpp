#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n + 1];
    int a[n + 1], b[n + 1];
    a[0] = 0;
    b[0] = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i + 1];
        a[i + 1] = ar[i + 1] + a[i];
        // cout << a[i + 1] << " ";
    }
    // cout << endl;
    sort(ar + 1, ar + n + 1);
    for (int i = 0; i < n; i++)
    {
        b[i + 1] = ar[i + 1] + b[i];
    }
    int m;
    cin >> m;
    while (m--)
    {
        int x, l, r;
        cin >> x >> l >> r;
        if (x == 1)
        {
            cout << a[r] - a[l - 1] << endl;
        }
        else
        {
            cout << b[r] - b[l - 1] << endl;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}