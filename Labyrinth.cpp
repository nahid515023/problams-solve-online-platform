#include <bits/stdc++.h>
using namespace std;
#define int long long

bool ck(vector<vector<bool>> &vis, int x, int y, int n, int m)
{
    if (x < 0 || y < 0 || x >= n || y >= m || vis[x][y])
        return 0;
    return 1;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    string s[n];
    for (int i = 0; i < n; i++)
        cin >> s[i];

    int x, y;
    bool ok = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'A')
            {
                x = i;
                y = j;
                ok = 1;
                break;
            }
        }
        if (ok)
            break;
    }

    int dx[] = {1, -1, 0, 0};
    int dy[] = {0, 0, 1, -1};

    vector<vector<bool>> vis(n, vector<bool>(m, 0));
    queue<pair<int, int>> q;
    q.push({x, y});
    vis[x][y] = 1;

    vector<vector<char>> p(n + 1, vector<char>(m + 1, '#'));

    bool f = 0;
    int xx = 0, yy = 0;

    while (!q.empty())
    {
        x = q.front().first;
        y = q.front().second;
        q.pop();
        if (s[x][y] == 'B')
        {
            xx=x,yy=y;
            f = 1;
            break;
        }
        for (int i = 0; i < 4; i++)
        {
            if (ck(vis, x + dx[i], y + dy[i], n, m) && s[x + dx[i]][y + dy[i]] != '#')
            {
                q.push({x + dx[i], y + dy[i]});

                vis[x + dx[i]][y + dy[i]] = 1;

                if (dx[i] == 0 && dy[i] == 1)
                {
                    p[x + dx[i]][y + dy[i]] = 'R';
                }
                else if (dx[i] == 0 && dy[i] == -1)
                {
                    p[x + dx[i]][y + dy[i]] = 'L';
                }
                else if (dx[i] == 1 && dy[i] == 0)
                {
                    p[x + dx[i]][y + dy[i]] = 'D';
                }
                else
                {
                    p[x + dx[i]][y + dy[i]] = 'U';
                }
            }
        }
    }

    // for (auto xa : p)
    // {
    //     for (auto xb : xa)
    //     {
    //         cout << xb << " ";
    //     }
    //     cout << endl;
    // }

    string aa;

    while (p[xx][yy] != '#')
    {
        aa.push_back(p[xx][yy]);
        if (p[xx][yy] == 'R')
        {
            yy--;
        }
        else if (p[xx][yy] == 'L')
        {
            yy++;
        }
        else if (p[xx][yy] == 'D')
        {
            xx--;
        }
        else
        {
            xx++;
        }
    }

    if (f == 0)
    {
        cout << "NO" << endl;
        return;
    }
    cout << "YES" << endl;
    cout << aa.size() << endl;
    reverse(aa.begin(),aa.end());
    cout << aa << endl;
}

int32_t main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
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