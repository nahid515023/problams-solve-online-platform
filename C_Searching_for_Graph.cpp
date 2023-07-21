#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, p;
    cin >> n >> p;
    int cnt = (2 * n) + p;

    for (int i = 1; i <= n; i++)
    {
        for (int j = i + 1; j <= n; j++)
        {
            cout << i << " " << j << endl;
            cnt--;
            if (cnt == 0)
                return;
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