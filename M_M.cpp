#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];
    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        int cnt2 = 0;
        int b = 0, w = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[i][j] == 'W')
            {
                cnt++;
                w++;
            }
            else
            {
                cnt = 0;
            }
            if (s[i][j] == 'B')
            {
                b++;
                cnt2++;
            }
            else
            {
                cnt2 = 0;
            }
            if (cnt == 3 || cnt2 == 3)
            {
                cout << 0 << endl;
                return;
            }
        }
        if (b != w)
        {
            cout << 0 << endl;
            return;
        }
    }
    for (int j = 0; j < n; j++)
    {
        int cnt = 0;
        int cnt2 = 0;
        int b = 0, w = 0;
        for (int i = 0; i < n; i++)
        {
            if (s[i][j] == 'W')
            {
                w++;
                cnt++;
            }
            else
            {
                cnt = 0;
            }
            if (s[i][j] == 'B')
            {
                b++;
                cnt2++;
            }
            else
            {
                cnt2 = 0;
            }
            if (cnt == 3 || cnt2 == 3)
            {
                cout << 0 << endl;
                return;
            }
        }
        if (b != w)
        {
            cout << 0 << endl;
            return;
        }
    }
    cout << 1 << endl;
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