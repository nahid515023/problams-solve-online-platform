#include <bits/stdc++.h>
using namespace std;
#define int long long
const int mod = 1e9 + 7;

void solve()
{
    int n, a, b;
    cin >> n >> a >> b;
    int x = n - a - b + 1;
    int s = 0;
    if (b == n || a == n || a + b == n || (a == n - 1 && n > 1))
    {
        cout << -1 << endl;
        return;
    }

    vector<int> ar(n, 3);
    if (a == 0 && b == 0)
    {
        int x = n + 1;
        for (int i = 0; i < n; i++)
        {
            ar[i] = x;
            x--;
        }
    }
    else if (b == 0)
    {
        for (int i = n - a; i < n; i++)
        {
            ar[i] = ar[i - 1] + 1;
        }
    }
    else if (a == 0)
    {
        fill(ar.begin(), ar.end(), 1);
        int i = 1;
        while (b--)
        {
            ar[i] = ar[i - 1] * 2;
            i++;
        }
    }
    else
    {
        fill(ar.begin(), ar.end(), 1);
        int i = 1;
        for (i = 1; i <= b; i++)
        {
            ar[i] = ar[i - 1] * 2;
        }
        while (a--)
        {
            ar[i] = ar[i - 1] + 1;
            i++;
        }
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