#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k, x;
    cin >> n >> k >> x;
    int num = 1;
    if (x == 1)
    {
        num++;
    }
    int cnt = 0;
    while (n - num >= 0)
    {
        n -= num;
        cnt++;
    }

    if (k == 1)
    {
        cout << "NO" << endl;
    }
    else if (n < x)
    {
        cout << "YES" << endl;
        cout << cnt << endl;
        for (int i = 0; i < cnt; i++)
        {
            cout << num << " ";
        }
        if (n > 0)
            cout << n;
        cout << endl;
    }
    else if (n + num <= k && n + num != x)
    {
        cout << "YES" << endl;
        cout << cnt << endl;
        for (int i = 0; i < cnt - 1; i++)
        {
            cout << num << " ";
        }
        cout << num + n << endl;
    }
    else
    {
        cout << "NO" << endl;
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