#include <bits/stdc++.h>
using namespace std;
#define int long long

double dis(int a, int b, int c, int d)
{
    return sqrt(((a - c) * (a - c)) + ((b - d) * (b - d)));
}

void solve()
{
    int x, y;
    cin >> x >> y;
    int a, b;
    cin >> a >> b;
    int c, d;
    cin >> c >> d;

    double ab = dis(a, b, c, d) / 2;
    double ap = dis(a, b, x, y);
    double bp = dis(c, d, x, y);
    double op = dis(0, 0, x, y);
    double oa = dis(0, 0, a, b);
    double ob = dis(0, 0, c, d);

    double ans = 1e9;

    ans = min(ans, max({ap, oa}));
    ans = min(ans, max(bp, ob));
    ans = min(ans, max({ab, ap, ob}));
    ans = min(ans, max({ab, bp, oa}));
    printf("%.10llf\n", ans);
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