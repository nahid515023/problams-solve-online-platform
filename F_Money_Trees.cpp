#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;

    int a[n], h[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = 0; i < n; i++)
        cin >> h[i];

    int l = 0, r = 0;
    int cnt = 0, x = 0, ans = 0;

    while (r < n - 1)
    {
        if (h[r] % h[r + 1] != 0)
        {
            r++;
            l = r;
            x = 0;
            cnt = 0;
        }
        else
        {
            if (cnt + a[r] <= k)
            {
                cnt += a[r];
                r++;
                x++;
            }
            else
            {
                while (cnt + a[r] > k)
                {
                    cnt -= a[l];
                    l++;
                    x--;
                }
                x++;
                cnt += a[r];
                r++;
            }
        }
        int aa = r - l;
        if (cnt + a[r] <= k)
            aa++;
        ans = max(ans, aa);
    }
    int aa = r - l;
    if (cnt + a[r] <= k)
        aa++;
    ans = max(ans, aa);
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