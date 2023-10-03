#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a,b,n;
    cin>>a>>b>>n;
    vector<int>v(n);
    for(auto &x:v) cin>>x;
    if(a==1){
        cout<<1<<endl;
        return;
    }
    int ans = b;
    for(int i=0;i<n;i++)
    {
        if(v[i]<a)
        {
            ans+=v[i];
        }
        else{
            ans+=a-1;
        }
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