#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int mi = 0;
    int val = 0;
    vector<string> v;
    for (int i = 0; i < n; i++)
    {
        string a;
        int b;
        cin >> a >> b;
        v.push_back(a);
        if (i == 0)
        {
            val = b;
        }
        else
        {
            if (val > b)
            {
                mi = i;
                val = b;
            }
        }
    }
    for (int i = mi; i < n; i++)
        cout << v[i] << endl;
    for (int i = 0; i < mi; i++)
        cout << v[i] << endl;
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