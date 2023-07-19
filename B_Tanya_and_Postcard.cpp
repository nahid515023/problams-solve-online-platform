#include <bits/stdc++.h>
using namespace std;
#define int long long

int a[205], b[205];
void solve()
{
    string s, t;
    cin >> s >> t;
    for (auto t : s)
        ++a[t];
    for (auto x : t)
        ++b[x];
    int ans = 0;
    for (int i = 0; i <= 200; i++)
    {
        int x = min(a[i], b[i]);
        ans += x, a[i] -= x, b[i] -= x;
    }
    cout << ans << " ";
    ans = 0;
    for (int i = 'A'; i <= 'Z'; i++)
        swap(a[i + 'a' - 'A'], a[i]);
    for (int i = 0; i <= 200; i++)
    {
        int x = min(a[i], b[i]);
        ans += x, a[i] -= x, b[i] -= x;
    }
    cout << ans << " ";
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}