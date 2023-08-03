#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;

    vector<int> cnt(n + 1);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;

        if (a <= n)
        {
            cnt[a]++;
        }
    }

    for (int i = n; i >= 1; i--)
    {
        for (int j = 2 * i; j <= n; j += i)
        {
            cnt[j] += cnt[i];
        }
    }

    auto ans = *max_element(cnt.begin(), cnt.end());
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