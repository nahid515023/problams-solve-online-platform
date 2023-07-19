#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int a, b, c;
    cin >> a >> b >> c;
    int x, y, z;
    cin >> x >> y >> z;
    int r;
    cin >> r;

    int B = 0, C = 0, S = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == 'B')
        {
            B++;
        }
        else if (s[i] == 'C')
        {
            C++;
        }
        else
        {
            S++;
        }
    }

    int l = 0, h = 1e15;

    while (l < h)
    {
        int m = (l + h + 1) / 2;
        int k = r;

        int bb = m * B - a;
        if (bb > 0)
        {
            k -= (bb * x);
        }
        int ss = m * S - b;
        if (ss > 0)
        {
            k -= (ss * y);
        }
        int cc = (m * C) - c;
        if (cc > 0)
        {
            k -= (cc * z);
        }

        if (k >= 0)
        {
            l = m;
        }
        else
        {
            h = m - 1;
        }
    }
    cout << l << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}