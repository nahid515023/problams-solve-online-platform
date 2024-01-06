#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    int ar[n];
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    vector<vector<int>> v;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int x = ar[i] + ar[j];
            if (x > k)
                continue;
            v.push_back({x, i + 1, j + 1});
        }
    }

    sort(v.begin(), v.end());

    for (int i = 0; i < v.size(); i++)
    {
        int x = k - v[i][0];
        int l = i + 1, h = v.size() - 1;
        while (l <= h)
        {
            int m = (l + h) / 2;
            if (v[m][0] == x)
            {
                while (m < v.size() && v[m][0] == x && (v[m][1] == v[i][1] || v[m][1] == v[i][2] || v[m][2] == v[i][1] || v[m][2] == v[i][2]))
                {
                    m++;
                }
                if (m < v.size() && v[m][0] == x)
                {
                    cout << v[m][1] << " " << v[m][2] << " " << v[i][1] << " " << v[i][2] << endl;
                    return;
                }
                break;
            }
            else if (v[m][0] < x)
                l = m + 1;
            else
                h = m - 1;
        }
    }
    cout << "IMPOSSIBLE" << endl;
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