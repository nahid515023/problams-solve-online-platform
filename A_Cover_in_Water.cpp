#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int cnt = 0;
    int x = 0;
    int tot = 0;

    string s;
    cin >> s;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '.')
        {
            x++;
            tot++;
            cnt = max(cnt, x);
        }
        else
        {
            x = 0;
        }
    }
    if (cnt > 2)
    {
        cout << 2 << endl;
    }
    else
    {
        cout << tot << endl;
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