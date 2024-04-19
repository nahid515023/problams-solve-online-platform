#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string a, b;
    cin >> a >> b;
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] > b[i])
        {
            for (i = i + 1; i < a.size(); i++)
            {
                if (a[i] > b[i])
                {
                    swap(a[i], b[i]);
                }
            }
        }

        if (a[i] < b[i])
        {
            for (i = i + 1; i < a.size(); i++)
            {
                if (a[i] < b[i])
                {
                    swap(a[i], b[i]);
                }
            }
        }
    }
    cout << a << endl;
    cout << b << endl;
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