#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, l;
    cin >> n >> l;

    vector<int> ans;

    int i = 0;
    int val = 2;
    int pre = 1;
    int pos = 2;

    while (i < n)
    {
        if (val + pre <= l)
        {
            ans.push_back(pre);
            pre = val;
            val++;
        }
        else
        {
            ans.push_back((l * pos));
            pos++;
        }
        i++;
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