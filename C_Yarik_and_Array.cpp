#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int sum = 0;
    int ans = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (sum < 0 || (i > 0 && abs(ar[i]) % 2 == abs(ar[i - 1]) % 2))
        {
            sum = 0;
        }
        sum += ar[i];
        ans = max(ans, sum);
    }
    cout << ans << endl;
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