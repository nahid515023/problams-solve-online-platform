#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    int ar[m + 2];
    for (int i = 1; i <= m; i++)
        cin >> ar[i];
    ar[0] = 1 - k;
    ar[m + 1] = n+1;

    int tot = 0;
    for (int i = 1; i <= m + 1; i++)
    {
        tot += (ar[i] - ar[i - 1] - 1) / k;
    }

    int ans = n + 1;
    int cnt = 0;

    for (int i = 1; i <= m; i++)
    {
        int val = tot - (ar[i] - ar[i - 1] - 1) / k - (ar[i + 1] - ar[i] - 1) / k + (ar[i + 1] - ar[i - 1] - 1) / k ;
        val+=m-1;
        if (ans > val)
        {
            ans = val;
            cnt = 1;
        }
        else if (ans == val)
        {
            cnt++;
        }
    }
    cout << ans << " " << cnt << endl;
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