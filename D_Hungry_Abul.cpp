#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    n--;
    int r = (n % 4);
    if (r == 0)
    {
        cout << "Alu bhorta";
    }
    else if (r == 1)
    {
        cout << "Begun bhorta";
    }
    else if (r == 2)
    {
        cout << "Sim bhorta";
    }
    else
    {
        cout << "Dim vaji";
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