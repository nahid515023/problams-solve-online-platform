#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    int n, m;
    cin >> n >> m;
    string x, s;
    cin >> x >> s;
    if (x == s)
    {
        cout << 0 << endl;
        return;
    }
    int cnt = 0;
    if (x.size() < s.size())
    {
        while (x.size() < s.size())
        {
            x.append(x);
            cnt++;
        }
    }

    for (int i = 0; i <= x.size() - m; i++)
    {
        
        if (x.substr(i, m) == s)
        {
            cout << cnt << endl;
            return;
        }
    }

    cnt++;
    x.append(x);
    for (int i = 0; i <= x.size() - m; i++)
    {
        if (x.substr(i, m) == s)
        {
            cout << cnt << endl;
            return;
        }
    }
    cout << -1 << endl;
}

int main()
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