#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    vector<pair<int, char>> u, l;

    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'b' && l.size() > 0)
        {
            l.pop_back();
        }
        else if (s[i] == 'B' && u.size() > 0)
        {
            u.pop_back();
        }
        else if (s[i] != 'b' && s[i] != 'B')
        {
            if (s[i] >= 'a' && s[i] <= 'z')
            {
                l.push_back({i, s[i]});
            }
            else
            {
                u.push_back({i, s[i]});
            }
        }
    }

    for (int i = 0; i < u.size(); i++)
    {
        l.push_back(u[i]);
    }

    sort(l.begin(), l.end());

    for (int i = 0; i < l.size(); i++)
    {
        cout << l[i].second;
    }
    cout << endl;
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