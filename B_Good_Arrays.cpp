#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < n - 1 && k > 0; i++)
    {
        if (v[i] < v[i + 1])
        {
            int d = v[i + 1] - v[i];
            if (k >= d * (i + 1))
            {
                v[i] += d;
                k -= d * (i + 1);
            }
            else
            {
                v[i] += k / (i + 1);
                break;
            }
        }
    }
    cout << *max_element(v.begin(), v.end()) << endl;
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