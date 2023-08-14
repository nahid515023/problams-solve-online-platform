#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int x, y;
    cin >> x >> y;
    int n;
    cin >> n;
    int ar[600];
    ar[0] = x;
    ar[1] = y;
    int sum = x + y;
    for (int i = 2; i < 100; i++)
    {
        ar[i] = ar[i - 1] - ar[i - 2];
        sum += ar[i];
        // cout << ar[i] << " ";
    }
    n--;
    int ans = ar[(n % 6)];
    ans=ans%1000000007;
    if(ans<0) ans=1000000007+ans;

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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}