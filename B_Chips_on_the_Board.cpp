#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int a[n], b[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> b[i];

    int x = *min_element(a, a + n);
    int y = *min_element(b, b + n);
    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        ans += (a[i] + y);
    }
    int ans2 = 0;
    for (int i = 0; i < n; i++)
    {
        ans2 += (b[i] + x);
    }
    cout << min(ans, ans2) << endl;
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