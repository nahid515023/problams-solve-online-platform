#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> a(n), ans;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    vector<bool> u(1e6 + 1);
    for (int i = 1; i <= 1e6 && ans.size() < n; i++)
    {
        if (u[i])
            continue;
        ans.push_back(i);
        for (int x = 0; x < n; x++)
        {
            for (int y = x + 1; y < n; y++)
            {
                int d = abs(a[x] - a[y]);
                if (i + d <= 1e6)
                    u[i + d] = 1;
            }
        }
    }
    cout << "YES" << endl;
    for (int xx : ans)
        cout << xx << " ";
    cout << endl;
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