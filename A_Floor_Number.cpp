#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,x;
    cin>>n>>x;
    int ans = 1;
    int f=2;
    while (n>f)
    {
        ans++;
        f+=x;
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