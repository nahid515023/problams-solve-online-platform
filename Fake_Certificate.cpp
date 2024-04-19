#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int cnt = 0;
    int mx = 0;
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
        {
            cnt = 0;
            one++;
        }
        else
        {
            cnt++;
        }
        mx = max(cnt, mx);
    }
    cout << one + mx << endl;
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