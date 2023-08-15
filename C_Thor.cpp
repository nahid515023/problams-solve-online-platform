#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, q;
    cin >> n >> q;
    int tot = 0, ans = 0;
    queue<int> qe[n + 5], aa;
    bool uses[1000000];
    memset(uses, 0, sizeof(uses));

    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x >> y;
        if (x == 1)
        {
            tot++;
            qe[y].push(tot);
            aa.push(tot);
        }
        else if (x == 2)
        {
            while (!qe[y].empty())
            {

                if (uses[qe[y].front()] == 0)
                {
                    ans++;
                    uses[qe[y].front()] = 1;
                }
                qe[y].pop();
            }
        }
        else
        {
            while (!aa.empty() && aa.front() <= y)
            {
                if (uses[aa.front()] == 0)
                {
                    uses[aa.front()] = 1;
                    ans++;
                }
                aa.pop();
            }
        }
        cout << tot-ans << endl;
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