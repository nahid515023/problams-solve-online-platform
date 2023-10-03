#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin>>n;
    while (n!=1)
    {
        cout<<n<<" ";
        if(n&1)
        {
            n=n*3+1;
        }
        else{
            n/=2;
        }
    }
    cout<<n<<endl;
    
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