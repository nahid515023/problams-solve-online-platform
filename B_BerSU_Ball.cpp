#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    multiset<int> a, b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.insert(x);
    }
    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        b.insert(x);
    }
    int cnt = 0;

    while (!a.empty() && !b.empty())
    {
        int f = *a.begin();
        int s = *b.begin();
        if (abs(f - s) < 2)
        {
            a.erase(a.begin());
            b.erase(b.begin());
            cnt++;
        }
        else{
            if(f<s)
            {
                a.erase(a.begin());
            }
            else{
                b.erase(b.begin());
            }
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