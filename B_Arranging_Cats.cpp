#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int cnt = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '1' && b[i] == '0')
            cnt++;
    }
    int cnt2 = 0;

    for (int i = 0; i < n; i++)
    {
        if (b[i] == '1' && a[i] != '1')
        {
            cnt2++;
        }
    }
    cout << min(cnt2, cnt) + abs(cnt - cnt2) << endl;
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