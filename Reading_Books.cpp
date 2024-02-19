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
    sort(ar, ar + n);
    int sum = 0;
    for (int i = 0; i < n - 1; i++)
    {
        sum += ar[i];
    }
    if (sum >= ar[n - 1])
    {
        cout << sum + ar[n - 1] << endl;
    }
    else
    {
        cout << sum + ar[n - 1] + (ar[n - 1] - sum) << endl;
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