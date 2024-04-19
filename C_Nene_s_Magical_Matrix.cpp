#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int tot = 0;
    int mov = n*2;
    for (int i = 1; i <= n; i++)
    {
        tot += i * (2 * i - 1);
    }
    cout << tot << " " << mov << endl;
    for (int i = n; i >= 1; i--)
    {
        cout << 1 << " " << i << " ";
        for (int j = 1; j <= n; j++)
            cout << j << " ";
        cout << endl;
        cout << 2 << " " << i << " ";
        for (int j = 1; j <= n; j++)
            cout << j << " ";
        cout << endl;
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