#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;

    int x = (n+1)/2;
    if(x>=k)
    {
        cout<<(k*2)-1<<endl;
        return;
    }

    int r=0;
    int a=k;
    while (k>0)
    {
        k-=(x);
        x=(x+1)/2;
        r++;
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