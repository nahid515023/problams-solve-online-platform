#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }


    int l = 0, h = 1e18;
    int ans = 0;

    while (l <= h)
    {
        int m = (l + h) / 2;
        // cout<<m<<endl;
        int cnt = 0;
        for (int i = 0; i < n; i++)
        {
            cnt += (m / ar[i]);
            if(cnt>k) break;
        }
        if (cnt >= k)
        {
            ans = m;
            h = m - 1;
        }
        else
        {
            l = m + 1;
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