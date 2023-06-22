#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    sort(ar, ar + n);

    if (n == 1)
    {
        cout << 0 << endl;
    }
    else if (n == 2)
    {
        cout << ar[1] - ar[0] << endl;
    }
    else if (n == 3)
    {
        cout << ar[2] - ar[0] << endl;
    }
    else
    {
        int ans = 0;
        int l = 0, r = n - 1;
        while (l < r)
        {
            ans += ar[r] - ar[l];
            r--;
            l++;
        }
        cout << ans << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}