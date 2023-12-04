#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> v(n);
    for (auto &x : v)
        cin >> x;

    sort(v.begin(), v.end());

    multiset<int>ms;
    for(int i=0;i<m;i++)
    {
        int a;
        cin>>a;
        ms.insert(a);
    }

    int cnt=0;
    for(int i=0;i<n && !ms.empty();i++)
    {
        auto x = ms.lower_bound(v[i]-k);

        if(x==ms.end()){
            continue;
        }

        if(*x<=v[i]+k)
        {
            cnt++;
            ms.erase(ms.lower_bound(v[i]-k));
        }
    }
    cout<<cnt<<endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //  freopen("input.txt", "r", stdin);

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