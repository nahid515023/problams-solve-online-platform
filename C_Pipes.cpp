#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s[2];
    cin >> s[0] >> s[1];

    int x = 0;
    int y = 0;

    for (int i = 0; i < n; i++)
    {
        char ch = s[y][x];
        if (s[y][x] == '1' || s[y][x] == '2')
        {
            x++;
        }
        else
        {
            if (y == 1)
            {
                y = 0;
                x++;
            }
            else
            {
                y = 1;
                x++;
            }
            if (s[y][x - 1] <= '2')
            {
                cout << "NO" << endl;
                return;
            }
        }
    }

    if (x == n && y == 1)
    {
        cout << "YES" << endl;
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