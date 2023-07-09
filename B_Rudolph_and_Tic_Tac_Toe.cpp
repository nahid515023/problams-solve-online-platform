#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s[3];
    cin >> s[0] >> s[1] >> s[2];
    for (int i = 0; i < 3; i++)
    {
        if (s[i][0] == s[i][1] && s[i][0] == s[i][2] && s[i][0] != '.')
        {
            cout << s[i][0] << endl;
            return;
        }
        if (s[0][i] == s[1][i] && s[0][i] == s[2][i] && s[0][i] != '.')
        {
            cout << s[0][i] << endl;
            return;
        }
    }

    if (s[0][0] == s[1][1] && s[2][2] == s[1][1] && s[0][0] != '.')
    {
        cout << s[0][0] << endl;
    }
    else if (s[0][2] == s[1][1] && s[2][0] == s[1][1] && s[0][2] != '.')
    {
        cout << s[0][2] << endl;
    }
    else
    {
        cout << "DRAW" << endl;
    }
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