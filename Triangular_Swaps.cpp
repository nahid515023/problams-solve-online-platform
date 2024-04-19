#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ans = n - 2;
    string p = "";
    int ok=0;
    for (int i = 0; i < n; i++)
    {
        if (i + 2 < n && s[i] == s[i + 1] && s[i] == s[i + 2])
        {
            ans--;
            ok=1;
        }
        if (i > 2 && s[i] != s[i - 1] && s[i] == s[i - 2] && s[i] == s[i - 3])
        {
            ans--;
        }
    }
    cout << ans+ok << endl;
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