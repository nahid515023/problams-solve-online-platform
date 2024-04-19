#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    string s;
    cin >> n >> s;

    if (n < 3)
    {
        cout << 0 << endl;
        return;
    }

    string s2 = "map", s3 = "pie", s4 = "mapie";

    if (n >= 5)
    {

        for (int i = 0; i < n - 4; i++)
        {
            if (s4 == s.substr(i, 5))
            {
                s[i + 2] = '1';
                s[i] = '0';
                s[i + 1] = '0';
                s[i + 3] = '0';
                s[i + 4] = '0';
            }
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            ans++;
        }
    }

    for (int i = 0; i < n - 2; i++)
    {
        if (s2 == s.substr(i, 3) || s3 == s.substr(i, 3))
        {
            s[i] = '1';
            s[i + 1] = '1';
            s[i + 2] = '1';
            ans++;
        }
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