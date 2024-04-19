#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    int l = 0, r = n - 1;
    int ans = 0;
    int cnt = 1;
    while (l < r && k > 0)
    {
        if (cnt & 1)
        {
            int mi = min(ar[l], ar[r]);
            if (mi == ar[l])
            {
                int x = mi * 2 - 1;

                if (k < x)
                    break;
                ans++;
                l++;
                ar[r] = ar[r] - mi + 1;
                cnt = 2;
                k -= x;
            }
            else
            {
                int x = mi * 2;
                if (k < x)
                    break;
                ans++;
                r--;
                ar[l] = ar[l] - mi;
                cnt = 1;
                k -= x;
            }
        }
        else
        {
            int mi = min(ar[l], ar[r]);
            if (mi == ar[r])
            {
                int x = mi * 2 - 1;
                if (k < x)
                    break;
                ans++;
                r--;
                ar[l] = ar[l] - mi + 1;
                cnt = 1;
                k -= x;
            }
            else
            {
                int x = mi * 2;
                if (k < x)
                    break;
                ans++;
                l++;
                ar[r] = ar[r] - mi;
                cnt = 2;
                k -= x;
            }
        }
    }
    if (l == r && ar[l] <= k)
        ans++;
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