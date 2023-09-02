#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m;
    cin >> n >> m;
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] != '.')
            {
                cnt++;
            }
        }
        if (cnt % 2 == 1)
        {
            cout << -1 << endl;
            return;
        }
    }

    for (int i = 0; i < m; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j][i] != '.')
            {
                cnt++;
            }
        }
        if (cnt % 2 == 1)
        {
            cout << -1 << endl;
            return;
        }
    }

    for (int i = 0; i < n; i++)
    {
        int cnt = 0;
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'U' && cnt % 2 == 0)
            {
                s[i][j] = 'W';
                s[i + 1][j] = 'B';
                cnt++;
            }
            else if (s[i][j] == 'U' && cnt % 2 == 1)
            {
                s[i][j] = 'B';
                s[i + 1][j] = 'W';
                cnt++;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        int cnt = 0;
        for (int j = 0; j < n; j++)
        {
            if (s[j][i] == 'L' && cnt % 2 == 0)
            {
                s[j][i] = 'W';
                s[j][i + 1] = 'B';
                cnt++;
            }
            else if (s[j][i] == 'L' && cnt % 2 == 1)
            {
                s[j][i] = 'B';
                s[j][i + 1] = 'W';
                cnt++;
            }
        }
    }
    for (int i = 0; i < n; i++)
    {
        cout << s[i] << endl;
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