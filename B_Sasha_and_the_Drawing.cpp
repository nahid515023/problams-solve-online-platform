#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n,k;
    cin>>n>>k;
    int x = (k+1)/2;
    if(x<=(n*2-2)){
        cout<<x<<endl;
    }
    else{
        int a = k-(n*2-2)*2;
        cout<<(n*2-2)+a<<endl;
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