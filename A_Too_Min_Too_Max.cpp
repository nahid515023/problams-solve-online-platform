#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    sort(ar, ar + n);
    int l = 0;
    int r = n - 1;
    int pos = 0;
    int ans = 0;
    int cnt = 0;
    while (l < r)
    {
        if (cnt == 3)
            break;
        if (pos == 0)
        {
            ans += abs(ar[l] - ar[r]);
            l++;
            pos = 1;
        }
        else
        {
            ans += abs(ar[r] - ar[l]);
            r--;
            pos = 0;
        }
        cnt++;
    }
     ans += abs(ar[r] - ar[0]);
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