#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s[10];
    for (int i = 0; i < 10; i++)
        cin >> s[i];

    int ans = 0;
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            if (s[i][j] == 'X')
            {
                int x = min({i, j, 9 - i, 9 - j}) + 1;
                ans += x;
            }
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