#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b, c, k;
    cin >> a >> b >> c >> k;
    if (a % k == b % k && b % k == c % k)
    {
        int cnt = a / k + b / k + c / k;
        if (cnt % 3 == 0)
        {
            cout << "Peaceful" << endl;
        }
        else
        {
            cout << "Fight" << endl;
        }
    }
    else
    {
        cout << "Fight" << endl;
    }
}

int32_t main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    // freopen("input.txt", "r", stdin);
    // freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    cin >> t;
    int i = 0;
    while (t--)
    {
        i++;
        printf("Case %lld: ", i);
        solve();
    }
    return 0;
}