#include <bits/stdc++.h>
using namespace std;
#define int long long

string f(string n)
{
    int sum = 0;
    for (int i = 0; i < n.size(); i++)
    {
        sum += (n[i] - '0');
    }
    return to_string(sum);
}

void solve()
{
    string n;
    cin >> n;
    int cnt = 0;
    while (n.size() > 1)
    {
        n = f(n);
        cnt++;
    }
    cout << cnt << endl;
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