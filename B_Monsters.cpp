#include <bits/stdc++.h>
using namespace std;
#define int long long

bool comp(pair<int, int> a, pair<int, int> b)
{
    if (a.first < b.first)
        return 0;
    else if (a.first > b.first)
        return 1;
    return a.second < b.second;
}

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    vector<pair<int, int>> aa;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
        if (v[i] % k == 0)
        {
            ans.push_back(i + 1);
        }
        else
        {
            aa.push_back({v[i] % k, i + 1});
        }
    }

    sort(aa.begin(), aa.end(), comp);

    for (int i = 0; i < aa.size(); i++)
    {
        ans.push_back(aa[i].second);
    }
    for (int i = 0; i < n; i++)
    {
        cout << ans[i] << " ";
    }
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