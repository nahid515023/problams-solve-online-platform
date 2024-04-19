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
    for (int i = 0; i < n - 2; i++)
    {
        int m = ar[i];
        ar[i] -= m;
        ar[i + 1] -= m * 2;
        ar[i + 2] -= m;
        if (ar[i] < 0 || ar[i + 1] < 0 || ar[i + 2] < 0)
        {
            cout << "NO" << endl;
            return;
        }
    }
    if (ar[n - 1] > 0 || ar[n - 2] > 0)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
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