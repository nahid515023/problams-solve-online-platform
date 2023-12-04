#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    map<int, int> mp1, mp2, mp3, mp4;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        mp1[x]++;
        mp2[y]++;
        mp3[x + y]++;
        mp4[x - y]++;
    }

    int ans = 0;

    for (auto [x, y] : mp1)
    {
        ans += (y * (y - 1));
    }
    for (auto [x, y] : mp2)
    {
        ans += (y * (y - 1));
    }
    for (auto [x, y] : mp3)
    {
        ans += (y * (y - 1));
    }
    for (auto [x, y] : mp4)
    {
        ans += (y * (y - 1));
    }

    cout << ans << endl;
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