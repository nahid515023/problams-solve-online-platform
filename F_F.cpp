#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, e;
    cin >> n >> e;
    int ar[n];
    e--;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int b = min_element(ar, ar + n) - ar;
    int cnt = count(ar, ar + n, ar[b]);
    int val = ar[b] + 1;
    if (b < e && cnt < 2)
    {
        int s = 0;
        for (int i = 0; i < b; i++)
        {
            s += (val - 1);
            ar[i] -= (val - 1);
        }
        for (int i = b + 1; i <= e; i++)
        {
            s += val;
            ar[i] -= (val);
        }
        for (int i = e + 1; i < n; i++)
        {
            s += val - 1;
            ar[i] -= (val - 1);
        }
        ar[b] += s;
    }
    else if (b > e && cnt < 2)
    {
        int s = 0;
        for (int i = 0; i <= e; i++)
        {
            s += (val);
            ar[i] -= (val);
        }
        for (int i = e + 1; i < b; i++)
        {
            s += (val - 1);
            ar[i] -= (val - 1);
        }
        for (int i = b + 1; i < n; i++)
        {
            s += val;
            ar[i] -= (val);
        }
        ar[b] += s;
    }
    else
    {
        int s = 0;
        for (int i = 0; i < n; i++)
        {
            if (i == e)
            {
                continue;
            }
            s += (val - 1);
            ar[i] -= (val - 1);
        }
        ar[e] += s;
    }
    for (int i = 0; i < n; i++)
    {
        cout << ar[i] << " ";
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}