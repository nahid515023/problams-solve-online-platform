#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin>>n;
    vector<int>v(n);
    for(auto &x:v) cin>>x;
    sort(v.begin(),v.end());
    int sum=0;
    for(int i=0;i<n;i++)
    {
        if(sum+1<v[i])
        {
            break;
        }
        sum+=v[i];
    }
    cout<<sum+1<<endl;
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