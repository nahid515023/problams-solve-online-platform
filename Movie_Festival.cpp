#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(pair<int,int>&a,pair<int,int>&b)
{
    return a.second<b.second;
}

void solve()
{
    int n;
    cin >> n;
    vector<pair<int, int>> v;
    for (int i = 0; i < n; i++)
    {
        int x, y;
        cin >> x >> y;
        v.push_back({x, y});
    }

    sort(v.begin(),v.end(),cmp);
    int cnt=0;
    int last=0;

    for(auto it:v)
    {
        if(it.first>=last)
        {
            cnt++;
            last=it.second;
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