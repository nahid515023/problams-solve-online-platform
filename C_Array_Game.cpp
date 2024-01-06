#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> ar(n);
    for (int i = 0; i < n; i++)
        cin >> ar[i];

    if (k > 2)
    {
        cout << 0 << endl;
        return;
    }

    sort(ar.begin(), ar.end());
    int mi = ar[0];

    if (k == 1)
    {
        for (int i = 1; i < n; i++)
        {
            mi = min(abs(ar[i] - ar[i - 1]), mi);
        }
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                int aa = abs(ar[i] - ar[j]);
                int inx = upper_bound(ar.begin(), ar.end(), aa) - ar.begin();
                mi = min(aa, mi);
                if (inx > 0)
                {
                    mi = min(abs(ar[inx - 1] - aa), mi);
                }
                if (inx < n)
                {
                    mi = min(abs(ar[inx] - aa), mi);
                }
            }
        }
    }
    cout << mi << endl;
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