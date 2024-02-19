#include <bits/stdc++.h>
using namespace std;
#define int long long

int nC3(int n)
{
    int x = n * (n - 1) * (n - 2);
    return x / 6;
}

int nC2(int n)
{
    int x = n * (n - 1);
    return x / 2;
}

void solve()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());

    int cnt = 0;
    int sm = 0;
    int prv = 0;
    int ans = 0;
    for (auto &x : v)
    {
        if (prv == x)
        {
            sm++;
        }
        else
        {
            int a = nC3(sm);
            int b = nC2(sm);
            ans += (cnt * b) + a;
            cnt += sm;
            prv = x;
            sm = 1;
        }
    }
    int a = nC3(sm);
    int b = nC2(sm);
    ans += (cnt * b) + a;
    cnt += sm;
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