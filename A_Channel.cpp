#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    int a = 0, b = 0;
    if (m == n)
    {
        cout << "YES" << endl;
        return;
    }
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '+')
        {
            m++;
        }
        else
        {
            a++;
        }
        if (m - a >= n)
        {
            cout << "YES" << endl;
            return;
        }
    }
    if (m >= n && m - a < n)
    {
        cout << "MAYBE" << endl;
    }
    else
    {
        cout << "NO" << endl;
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