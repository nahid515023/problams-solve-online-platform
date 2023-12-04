#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n, a, b;
    cin >> n >> a >> b;
    ll x = 1;

    while (x <= n)
    {
        if ((n - x) % b == 0)
        {
            cout << "Yes" << endl;
            return;
        }
        x *= a;
        if (a == 1)
            break;
    }
    cout << "No" << endl;
}

int main()
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