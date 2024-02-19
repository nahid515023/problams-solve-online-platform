#include <bits/stdc++.h>
using namespace std;
#define int long long

int f(int i)
{
    if (i == 0)
        return 1;
    if (i % 3 == 2)
        return 0;
    return f(i / 3);
}

void solve()
{
    int a;
    cin >> a;

    while (true)
    {
        if (f(a))
        {
            cout << a << endl;
            return;
        }
        a++;
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}