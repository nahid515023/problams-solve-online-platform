#include <bits/stdc++.h>
using namespace std;
#define int long long

int binPow(int n)
{
    if(n==0) return 1;

    int res = binPow(n/2);
    
    if(n%2==0)
    {
        return (res*res)%1000000007;
    }
    else{
        return ((res*res)%1000000007*2)%1000000007;
    }
}

void solve()
{
    int n;
    cin>>n;
    cout<<binPow(n)<<endl;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}