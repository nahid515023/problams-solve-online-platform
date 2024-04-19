#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    string ns;
    bool ok = 0;
    int one = 0;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1')
            one += 1;
    }

    if (one == n && k > 0)
    {
        s[0] = '0';
        k--;
    }

    for (int i = 0; i < n; i++)
    {
        if (s[i] == '1' && k > 0)
        {
            k--;
        }
        else
        {
            ns.push_back(s[i]);
        }
    }

    while (k > 0)
    {
        ns.pop_back();
        k--;
    }
    cout << ns << endl;
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}