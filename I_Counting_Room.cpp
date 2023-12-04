#include <bits/stdc++.h>
using namespace std;

#define int long long

string s[1005];
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n, m;

bool vis[1005][1005];

bool ck(int x, int y)
{
    if (x < 0 || y < 0 || x >= n || y >= m || s[x][y] == '#' || vis[x][y])
        return false;
    return true;
}

void dfs(int x, int y)
{
    vis[x][y] = true;
    for (int i = 0; i < 4; i++)
    {
        int a = x + dx[i];
        int b = y + dy[i];

        if (ck(a, b))
        {
            dfs(a, b);
        }
    }
}

void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> s[i];

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '.' && !vis[i][j])
            {
                ans++;
                dfs(i, j);
            }
        }
    }
    cout << ans << endl;
}

int32_t main()
{
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}
