#include <bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin >> n;
    int a[n][n];
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        ar[i] = (1 << 30) - 1;
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            if (i != j)
            {
                ar[i] &= a[i][j];
                ar[j] &= a[i][j];
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (i != j && (ar[i] | ar[j]) != a[i][j])
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
    for (int i = 0; i < n; i++)
        cout << ar[i] << " ";
    cout << endl;
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