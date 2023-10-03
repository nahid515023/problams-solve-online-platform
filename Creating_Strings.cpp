#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin>>s;
    sort(s.begin(),s.end());
    vector<string>v;
    do{
        v.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout<<v.size()<<endl;
    for(auto &x:v) cout<<x<<endl;
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