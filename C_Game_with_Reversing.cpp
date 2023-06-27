#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int c = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[i])
        {
            c++;
        }
    }
    int d = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] != b[n - i - 1])
        {
            d++;
        }
    }
    // cout << c << " " << d << endl;
    int ans1 = c*2-(c%2==1);
    int ans2 = d*2-(d%2==0);
    ans2 = max(ans2,2LL);
    cout<<min(ans1,ans2)<<endl;
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