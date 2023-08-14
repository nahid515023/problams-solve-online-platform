#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] >= '5' && i - 1 >= 0)
        {
            s[i - 1]++;
        }
        if (s[i] >= '5' && i == 0)
        {
            cout << 1;
        }
    }
    bool ok = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '5')
        {
            ok = 1;
        }
        if (ok)
        {
            cout << 0;
        }
        else
            cout << s[i];
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