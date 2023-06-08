#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,k;
    cin>>n>>k;
    if(log2(n)<k)
    {
        cout<<n+1<<endl;
    }
    else{
        cout<<(int)powl(2,k)<<endl;
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