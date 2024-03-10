#include <bits/stdc++.h>
using namespace std;
#define int long long

int func(int val,int n){
    int cnt=0;
    for(int i=1;i<=n;i++){
        cnt+=min(n,val/i);
    }
    return cnt;
}

void solve()
{
    int n;
    cin>>n;
    int l=0,r=n*n;
    int ans=r,target=n*n/2+1;
    while (l<=r)
    {
        int mid = (l+r)/2;
        if(func(mid,n)>=target){
            ans=mid;
            r=mid-1;
        }else{
            l=mid+1;
        }

    }
    cout<<ans<<'\n';
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