#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a[] = {0, 1, 2, 3, 4,5};
    int b[] = {0, 1, 2, 3, 4,5};
    int n=6;
    do
    {
        set<int> c;
        for (int i = 0; i < n; i++)
        {
            c.insert((a[i] + b[i]) % n);
        }
        if (c.size() == n)
        {
            for (auto &x : c)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    } while (next_permutation(b, b + n));
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