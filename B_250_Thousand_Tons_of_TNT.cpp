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

    vector<int> v;

    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            v.push_back(i);
            int x = n / i;
            if (x != i)
                v.push_back(x);
        }
    }

    int mi = *min_element(ar, ar + n);
    int mx = *max_element(ar, ar + n);

    int ans = mx - mi;

    for (int &x : v)
    {
        int a = 1e18, b = 0;
        int c = 0;
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            s += ar[i];
            c++;
            if (c == x)
            {
                a = min(a, s);
                b = max(b, s);
                c = 0;
                s = 0;
            }
        }
        ans = max(b - a, ans);
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
// freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}