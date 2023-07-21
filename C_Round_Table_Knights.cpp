#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    std::vector<bool> check(n + 1);

    for (int i = 3; i <= n; i++)
    {
        if (check[i])
        {
            continue;
        }
        if (n % i)
        {
            continue;
        }
        for (int j = i; j <= n; j += i)
        {
            check[j] = true;
        }

        for (int k = 0; k < n / i; k++)
        {
            bool ok = true;
            for (int x = k; x < n; x += n / i)
            {
                if (!a[x])
                {
                    ok = false;
                }
            }
            if (ok)
            {
                cout << "YES\n";
                return;
            }
        }
    }
    cout << "NO\n";
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