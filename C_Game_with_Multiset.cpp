#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(35, 0);
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
        {
            v[b]++;
            while (v[b] > 2 && b < 32)
            {
                v[b] -= 2;
                v[b + 1] += 1;
                b++;
            }
        }
        else
        {
            int x = log2(b);
            while (x >= 0 && b > 0)
            {
                if (v[x] > 1 && b >= (1 << x) * 2)
                {
                    b -= (1 << x) * 2;
                }
                else if (v[x] > 0 && b >= (1 << x))
                {
                    b -= (1 << x);
                }
                x--;
            }

            if (b == 0)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
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