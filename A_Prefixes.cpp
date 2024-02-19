#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int a = 0, b = 0;
    for (int i = 0; i < n - 1; i += 2)
    {
        if (s[i] == s[i + 1])
        {
            a++;
            if (s[i] == 'a')
            {
                s[i + 1] = 'b';
            }
            else
            {
                s[i + 1] = 'a';
            }
        }
    }
    cout << a << endl;
    cout << s << endl;
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