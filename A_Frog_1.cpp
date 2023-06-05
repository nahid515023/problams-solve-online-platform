#include <bits/stdc++.h>
using namespace std;
#define int long long
int n;
int ar[100007];
int fun(int i)
{
    int val = 0;
    if (i >= n)
    {
        return 0;
    }
    val = min(abs(fun(i + 1)-ar[i]), abs(fun(i + 2)-ar[i]));
    return val;
}

void solve()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    int x = fun(0);
    cout << x << endl;
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