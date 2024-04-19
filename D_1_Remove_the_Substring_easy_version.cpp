#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s, t;
    cin >> s >> t;
    int ans = 0;
    if (s == t)
    {
        cout << 0 << endl;
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == t[0])
        {
            int pos = i + 1;
            int mx = i;
            int cnt = 1;
            for (int j = 1; j < t.size() && pos < s.size(); j++)
            {
                int x = find(s.begin() + pos, s.end(), t[j]) - s.begin();
                if (x == s.size())
                    break;
                mx = max(mx, x - pos + 1);
                pos = x + 1;
                cnt++;
            }
            if (cnt == t.size())
            {
                int aa = s.size();
                mx = max(mx, aa - pos);
                ans = max(ans, mx);
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}