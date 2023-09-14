#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> ar[n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                ar[i].push_back(j);
            }
        }
    }
    // for (int i = 0; i < n; i++)
    // {
    //     for (auto &x : ar[i])
    //     {
    //         cout << x << " ";
    //     }
    //     cout << endl;
    // }
    int cnt = 0;
    for (int i = 0; i < ar[0].size(); i++)
    {
        for (int j = 0; j < ar[1].size(); j++)
        {
            for (int k = 0; k < ar[2].size(); k++)
            {
                for (int l = 0; l < ar[3].size(); l++)
                {
                    if (ar[0][i] == ar[1][j] || ar[0][i] == ar[2][k] || ar[0][i] == ar[3][l] || ar[1][j] == ar[2][k] || ar[1][j] == ar[3][l] || ar[2][k] == ar[3][l])
                    {
                        continue;
                    }
                    cout << ar[0][i]+1 << " " << ar[1][j]+1 << " " << ar[2][k]+1 << " " << ar[3][l]+1 << endl;
                    cnt++;
                }
            }
        }
    }
    cout << cnt << endl;
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
