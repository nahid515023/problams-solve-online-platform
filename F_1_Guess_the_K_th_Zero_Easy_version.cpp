#include <bits/stdc++.h>
using namespace std;
#define int long long

int qr(int l, int h)
{
    cout << "? " << l << " " << h << endl;
    int s=0;
    cin>>s;
    return (h-l+1)-s;
}

void solve()
{
    int n, t, k;
    cin >> n >> t >> k;
    int ans=n;
    int l = 1, h = n;
    while (l <= h)
    {
        int m = (l + h) / 2;
        int v = qr(1,m);
        if(v>=k){
            ans=m;
            h=m-1;
        }
        else{
            l=m+1;
        }
    }
    cout<<"! "<<ans<<endl;
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