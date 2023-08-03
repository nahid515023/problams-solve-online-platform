#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string sr;
    int n=8;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            char a;
            cin >> a;
            if (a != '.')
            {
                sr.push_back(a);
            }
        }
    }
    cout << sr << endl;
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