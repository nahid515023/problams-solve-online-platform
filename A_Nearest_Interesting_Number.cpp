#include <bits/stdc++.h>
using namespace std;
#define int long long

int f(int n){
    int s=0;
    while(n){
        s+=(n%10);
        n/=10;
    }
    return s;
}

void solve()
{
    int n;
    cin >> n;
    while (f(n) % 4 != 0)
    {
        n++;
    }
    cout << n << endl;
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