#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, p, l, t;
    cin >> n >> p >> l >> t;
    int tot = l+t;
    int x =(p/tot);
    if(p%tot!=0) x++;
    int y = (n/7)+1;
    if(x<=y){
        cout<<n-x<<endl;
    }
    else{
        n-=x;
        p-=(x*tot);
        n-=ceil(p/l);
        cout<<n<<endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
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