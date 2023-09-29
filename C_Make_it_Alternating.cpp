#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int cnt = 0;
    for (int i = 0; i < s.size() - 1; i++)
    {
        if (s[i] == s[i + 1])
            cnt++;
    }
    cout << cnt << " ";

    int ans = 1;
    int n = s.size();
    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == s[i + 1])
        {
            int x = 1;
            int j = i + 1;
            while (s[i] == s[j] && j < n)
            {
                j++;
                x++;
            }
            ans += (x * (x + 1) / 2) - 1;
            i = j - 1;
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