#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int x = 0, y = 0;
    int c1 = 0, c2 = 0;
    vector<int> v1, v2;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 'a' && b[i] != a[i])
        {
            x++;
            v1.push_back(i + 1);
        }
        if (a[i] == 'b' && b[i] != a[i])
        {
            y++;
            v2.push_back(i + 1);
        }

        if (a[i] == 'a')
            c1++;
        else
            c2++;

        if (b[i] == 'a')
            c1++;
        else
            c2++;
    }

    if (c1 & 1 || c2 & 1)
    {
        cout << -1 << endl;
        return;
    }

    int ans = (x + 1) / 2 + (y + 1) / 2;
    cout << ans << endl;

    int m1 = v1.size() / 2;

    for (int i = 0; i < m1; i++)
    {
        cout << v1[i] << " "
             << v1[m1 + i] << endl;
    }
    int m2 = v2.size() / 2;
    for (int i = 0; i < m2; i++)
    {
        cout << v2[i] << " "
             << v2[m2 + i] << endl;
    }
    if (v1.size() & 1 && v2.size() & 1)
    {
        cout << v1[v1.size() - 1] << " " << v1[v1.size() - 1] << endl;
        cout << v1[v1.size() - 1] << " " << v2[v2.size() - 1] << endl;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}