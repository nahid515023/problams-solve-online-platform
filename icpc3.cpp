#include <bits/stdc++.h>
using namespace std;
#define int long long
int tt = 0;

void solve()
{
    int n;
    cin >> n;
    int a, b;
    cin >> a >> b;

    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + n);


    int ans = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (b <= ar[i])
            continue;
        if (ar[i] * 2 < a)
            break;

        int x = b - ar[i];
        int y = ar[i] - a;
        auto aa = upper_bound(ar, ar + n, x);
        if (aa - ar <= i)
            ans += (aa - ar);
        else
            ans += i;

        if (ar[i] < a)
        {
            auto bb = lower_bound(ar, ar + n, a - ar[i]);
            ans -= (bb - ar);
        }
    }

    printf("Case %lld: %lld\n", ++tt, ans);
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