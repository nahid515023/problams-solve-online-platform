#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> v;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back({x, i + 1});
    }
    sort(v.begin(), v.end());

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            int x = v[i].first + v[j].first;
            int y = k - x;
            if (x > k || v[j].first > y)
                break;

            int l = j + 1, h = n - 1;
            int inx = -1;
            while (l <= h)
            {
                int m = (l + h) / 2;
                if (v[m].first == y)
                {
                    inx = m;
                    break;
                }
                else if (v[m].first > y)
                {
                    h = m - 1;
                }
                else
                {
                    l = m + 1;
                }
            }
            if(inx!=-1)
            {
                int aa = v[i].second;
                int bb = v[j].second;
                int cc = v[inx].second;

                cout<<aa<<" "<<bb<<" "<<cc<<endl;
                return;
            }
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