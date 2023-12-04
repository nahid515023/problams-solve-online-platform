#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, q;
    cin >> n >> q;
    string s;
    cin >> s;
    vector<int> ar(n + 4, 0);

    for (int i = 0; i < n - 2; i++)
    {
        if (s[i] == s[i + 1] || s[i] == s[i + 2] || s[i + 1] == s[i + 2])
        {
            ar[i + 1] = 1;
        }
    }

    for (int i = 1; i <= n; i++)
    {
        ar[i] = ar[i] + ar[i - 1];
    }

    while (q--)
    {
        int x, y;
        cin >> x >> y;
        if (y - x + 1 < 3)
        {
            cout << "NO" << endl;
        }
        else
        {
            int aa = ar[y - 2] - ar[x - 1];
            if (aa > 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}