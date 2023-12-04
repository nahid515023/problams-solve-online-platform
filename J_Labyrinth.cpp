#include <bits/stdc++.h>
using namespace std;

#define int long long

string s[1005];
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, 1, -1};
int n, m;

bool ok = 0;

bool vis[1005][1005];

bool ck(int x, int y)
{
    if (x < 0 || y < 0 || x >= n || y >= m || s[x][y] == '#' || vis[x][y])
        return false;
    return true;
}

string dfs(int x, int y, vector<pair<int, int>> aa)
{
    if (s[x][y] == 'B')
    {
        for (auto it : aa)
        {
            cout << "[ " << it.first << " " << it.second << " ] ,";
        }
        cout << endl;
        return "";
    }
    vis[x][y] = true;

    string sr;
    int len = 1e4;

    for (int i = 0; i < 4; i++)
    {
        int a = x + dx[i];
        int b = y + dy[i];

        if (ck(a, b))
        {
            aa.push_back({a, b});
            string st = dfs(a, b, aa);
            char ch;
            if (dx[i] == 1)
            {
                ch = 'D';
            }
            else if (dx[i] == -1)
            {
                ch = 'U';
            }
            else if (dy[i] == 1)
            {
                ch = 'R';
            }
            else
            {
                ch = 'L';
            }
            st.push_back(ch);

            if (len > st.size())
            {
                sr = st;
                len = st.size();
            }
            aa.pop_back();
        }
    }
    return sr;
}

void solve()
{
    cin >> n >> m;
    for (int i = 0; i < n; i++)
        cin >> s[i];

    int ans = 0;

    int x = 0, y = 0;

    for (int i = 0; i < n; i++)
    {
        bool c = 0;
        for (int j = 0; j < m; j++)
        {
            if (s[i][j] == 'A')
            {
                x = i, y = j;
                c = 1;
                break;
            }
        }
        if (c)
            break;
    }
    vector<pair<int, int>> aa;
    string st = dfs(x, y, aa);
    reverse(st.begin(), st.end());
    cout << st << endl;
}

int32_t main()
{
    int t = 1;
    // cin >> t;
    // freopen("input.txt", "r", stdin);
    while (t--)
    {
        solve();
    }
    return 0;
}
