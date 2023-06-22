#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int A = 0, B = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[0])
            A++;
        else if (s[i] == s.back())
            B++;
    }
    int x = 1;
    if (A > B)
        x = -1;
    int S = 0, ok = 1;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == s[0])
            S++;
        else if (s[i] == s.back())
            S--;
        else
            S += x;
        if (S < 0)
            ok = 0;
    }
    if (S != 0)
        ok = 0;
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
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