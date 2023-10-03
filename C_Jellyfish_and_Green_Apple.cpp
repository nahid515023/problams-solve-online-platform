#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int m,n;
    cin>>m>>n;
    if(m%n!=0)
    {
        int d = __gcd(n,m);
        n/=d;
        m/=d;
        bool f=0;
        if(__builin_popcon)
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}