#include <bits/stdc++.h>
using namespace std;
#define int long long

int cnt(string s)
{
    int c = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] != '0')
        {
            break;
        }
        c++;
    }
    return c;
}

void solve()
{
    int n, m;
    cin >> n >> m;
    int ans = 0;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        string x;
        cin >> x;
        ans += x.size();
        int r = cnt(x);
        v.push_back(r);
    }
    sort(v.rbegin(), v.rend());

    for (int i=0;i<n;i+=2)
    {
        ans-=v[i];
    }
    
    if(ans<=m)
    {
        cout<<"Anna"<<endl;
    }
    else{
        cout<<"Sasha"<<endl;
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
