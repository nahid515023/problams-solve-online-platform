#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, x;
    cin >> n >> x;
    vector<int> v(n);
    for (auto &a : v)
        cin >> a;
    sort(v.begin(),v.end());
    int l=0,h=n-1;
    int cnt=0;
    while (l<=h)
    {
        int s=v[l]+v[h];
        if(s>x)
        {
            cnt++;
            h--;
        }
        else{
            cnt++;
            l++;
            h--;
        }
    }
    cout<<cnt<<endl;
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