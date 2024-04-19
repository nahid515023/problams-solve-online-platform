#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;

    int ans = a;
    int mi = (3 - (b % 3));
    if (mi > c && mi != 3)
    {
        cout << -1 << endl;
        return;
    }
    if(mi==3) mi=0;
    ans += (b + mi) / 3;
    ans += (c - mi) / 3;
    if ((c - mi) % 3 != 0)
    {
        ans += 1;
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