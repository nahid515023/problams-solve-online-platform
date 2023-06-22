#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    multiset<int> ms;
    int sum = 0;
    int mul = 1;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ms.insert(a);
        sum += a;
        mul *= a;
    }
    int ans=0;
    while (!ms.empty() && (sum < 0 || mul < 0))
    {
        sum += 2;
        mul *= -1;
        ms.erase(ms.begin());
        ans++;
    }
    cout<<ans<<endl;
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