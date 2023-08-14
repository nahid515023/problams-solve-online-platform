#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 1; i <= n; i++)
    {
        v.push_back(i);
    }

    do
    {
        int mx = 0;
        for (int i = 0; i < v.size(); i++)
        {
            mx = max(v[i] * (i + 1), mx);
        }
        int s = 0;
        for (int i = 0; i < v.size(); i++)
        {
            s += (v[i] * (i + 1));
        }
        if (s - mx >= 303)
        {
            cout << s - mx << endl;
            for (int i = 0; i < v.size(); i++)
                cout << v[i] << " ";
            cout << endl;
        }
    } while (next_permutation(v.begin(), v.end()));
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