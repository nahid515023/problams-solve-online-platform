#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int cnt = 0;
    if (s[0] != 'a')
        cnt++;
    if (s[1] != 'b')
        cnt++;
    if (s[2] != 'c')
        cnt++;
    if (cnt > 2)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
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