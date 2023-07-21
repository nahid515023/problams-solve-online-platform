#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    set<int> prime;

    for (int i = 2; i <= n; i++)
    {
        bool ok = 0;
        for (int k = 2; k * k <= i; k++)
        {
            if (i % k == 0)
            {
                ok = 1;
                break;
            }
        }
        if (!ok)
        {
            prime.insert(i);
        }
    }
    vector<int> ans;
    for (int i = 2; i <= n; i++)
    {
        if (prime.count(i))
        {
            int r = 1;
            while (r * i <= n)
            {
                r = r * i;
                ans.push_back(r);
            }
        }
    }
    cout<<ans.size()<<endl;
    for (auto &x : ans)
        cout << x << " ";
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}