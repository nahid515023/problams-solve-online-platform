#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    int rt = pow(2, n + 1) - 1;

    for (int i = 0; i < s.size(); i++)
    {
        int x = pow(2, i);
        if (s[i] == 'R')
        {
            x += 1;
        }
        rt -= x;
    }
    cout << rt << endl;
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