#include <bits/stdc++.h>
using namespace std;
#define int long long
string s[505];
int n, m, k, cnt = 0;
int dx[] = {1, -1, 0, 0};
int dy[] = {0, 0, 1, -1};
bool vis[555][555];

bool ck(int x, int y)
{
    if (x >= n || y >= m || x < 0 || y < 0 || vis[x][y] || s[x][y] == '#')
        return 0;
    return 1;
}

void dfs(int x, int y)
{
    vis[x][y] = 1;
    if (cnt <= k)
        s[x][y] = 'X';
    cnt--;
    for (int i = 0; i < 4; i++)
    {
        if (ck(x + dx[i], y + dy[i]))
        {
            dfs(x + dx[i], y + dy[i]);
        }
    }
}

void solve()
{
    cin >> n >> m >> k;
    for (int i = 0; i < n; i++)
        cin >> s[i];

    bool ok = 0;
    int a, b;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == '.')
            {
                cnt++;
                a = i, b = j;
            }
        }
    }
    dfs(a, b);

    for (int i = 0; i < n; i++)
        cout << s[i] << endl;
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