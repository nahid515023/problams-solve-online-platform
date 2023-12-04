#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N=3e5+7;
int arr[N];

void solve()
{
    int n,i;
    cin>>n;

    for(i=0;i<n;i++) cin>>arr[i];

    int ans=0;

    for(i=n-2;i>=0;i--)
    {
        int k=ceil(1.0*arr[i]/arr[i+1]);
        ans+=k-1;
        arr[i]/=k;
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