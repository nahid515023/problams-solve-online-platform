#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    int ar[n + 1][m + 1];
    int num = 1;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            ar[i][j] = num;
            num++;
        }
    }
    for (int i = 2; i <= n; i += 2)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 1; i <= n; i += 2)
    {
        for (int j = 1; j <= m; j++)
        {
            cout << ar[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
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