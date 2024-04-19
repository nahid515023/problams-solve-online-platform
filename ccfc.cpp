#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int pos = -1;
    for (int i = 0; i < n; i++)
    {
        if (a[i] == '<' && b[i] == '<')
        {
            pos = i;
        }
    }
    if (pos < n - 1)
    {
        cout << "NO" << endl;
        return;
    }
    else{
        
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