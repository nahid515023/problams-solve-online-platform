#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    bool ok = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] < 0)
        {
            ok = 1;
        }
    }
    sort(ar, ar + n);
    if (ok == 0)
        cout << ar[n - 1] << endl;
    else
        cout << ar[0] << endl;
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