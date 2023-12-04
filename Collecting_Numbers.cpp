#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin>>n;
    int ar[n+1];
    for(int i=1;i<=n;i++)
    {
        int a;
        cin>>a;
        ar[a]=i;
    }

    int cnt=1;

    for(int i=1;i<n;i++)
    {
        if(ar[i]>ar[i+1])
        {
            cnt++;
        }
    }
    cout<<cnt<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
// #ifndef ONLINE_JUDGE
    // freopen("output.txt", "w", stdout);
// #endif
    int t = 1;
    
    while (t--)
    {
        solve();
    }
    return 0;
}