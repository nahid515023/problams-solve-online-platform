#include <bits/stdc++.h>
using namespace std;
#define int long long
set<int> st;

bool f(int n)
{
    int l = 0, h = 0;
    while (l <= h)
    {
        int p = 3;
        int b = (l + h) / 2;
        int ans = 1 + b + b * b;
        while (ans <= 1000000)
        {
            if (ans == n)
                return 1;
            ans = ans + pow(b, p);
            p++;
        }

        if(ans<n) l=b+1;
        else
    }
}

void solve()
{
    int n;
    cin >> n;
    if (st.count(n))
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
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
    f();
    while (t--)
    {
        solve();
    }
    return 0;
}