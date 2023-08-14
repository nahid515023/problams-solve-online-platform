#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n), a(n);
    for (auto &x : v)
        cin >> x;

    int ans = 0;

    for (int i = n - 1; i > 0; i--)
    {
        a = v;
        int x = k;
        int p = i;
        if (v[i] < v[i - 1])
            continue;

        for (int j = i; j > 0; j--)
        {
            if (x == 0)
                break;

            if (a[j] < a[j - 1])
                break;

            int r = a[j] - a[j - 1] + 1;
            if (r <= x)
            {
                a[j - 1] += r;
                x-=r;
            }
            else
            {
                a[j - 1] += x;
                x-=x;
            }
        }

        int xx = *max_element(a.begin(), a.end());
        ans = max(xx, ans);
    }
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