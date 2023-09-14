#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int one = 0;
    int zero = 0;
    // cout << one << endl;
    vector<int> a(n + 1, 0);
    int cnt = 0;
    for (int i = 0; i < n / 2; i++)
    {
        if (s[i] != s[n - i - 1])
        {
            cnt++;
        }
        else if (s[i] == s[n - i - 1] && s[i] == '0')
            zero++;
        else if (s[i] == s[n - i - 1] && s[i] == '1')
            one++;
    }

    if (cnt == 0)
    {
        a[0] = 1;
    }
    int v = 0;
    if (n & 1)
        v = 1;

    for (int i = 1; i <= n; i++)
    {
        if (cnt > i)
            continue;
        if (i - cnt > (one * 2 + zero * 2) + v)
            continue;

        if ((i - cnt) % 2 == 1)
        {
            if (n % 2 == 0)
            {
                continue;
            }
            else
            {
                a[i] = 1;
            }
        }
        else
        {
            a[i] = 1;
        }
    }

    for (int i = 0; i <= n; i++)
    {
        cout << a[i];
    }
    cout << endl;
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