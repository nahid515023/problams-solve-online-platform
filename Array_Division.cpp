#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    int sum = 0;
    int mx = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        sum += ar[i];
        mx = max(mx, ar[i]);
    }

    int l = mx, r = sum;
    int ans = 0;
    while (l <= r)
    {
        int m = (l + r) / 2;
        int grp = 1;
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            if (s + ar[i] > m)
            {
                s = ar[i];
                grp++;
            }
            else
            {
                s += ar[i];
            }
        }

        // cout<<grp<<endl;

        if (grp > k)
        {
            l = m + 1;
        }
        else
        {
            r = m - 1;
        }
    }
    cout << l << endl;
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