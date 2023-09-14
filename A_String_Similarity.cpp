#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if (n == 1)
    {
        cout << s << endl;
        return;
    }
    for (int i = 1; i < s.size() - 1; i++)
    {
        if (s[i] == '0')
        {
            cout << string(n, '0') << endl;
            return;
        }
    }
    cout << string(n, '1') << endl;
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