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

    if (k == 4)
    {
        int cnt = 0;
        int cnt2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 4 == 0)
                cnt++;
            else if (ar[i] % 2 == 0)
                cnt2++;
        }

        if (cnt > 0 || cnt2 > 1)
        {
            cout << 0 << endl;
            return;
        }

        int ans = 2;

        if (cnt2 == 1)
        {
            ans = 1;
        }

        for (int i = 0; i < n; i++)
        {
           
            ans = min(ans, k - (ar[i] % k));
        }
        cout << ans << endl;
    }
    else
    {
        int ans = 10;
        for (int i = 0; i < n; i++)
        {
             if (ar[i] % k == 0)
                ans = 0;
            ans = min(ans, k - (ar[i] % k));
        }
        cout << ans << endl;
    }
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