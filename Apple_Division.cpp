#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    multiset<int,greater<int>> ms;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin >> a;
        ms.insert(a);
    }
    int a=0,b=0;
    while (!ms.empty())
    {
        if(a<=b)
        {
            a+=*ms.begin();
            ms.erase(ms.begin());
        }
        else{
            b
        }
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}