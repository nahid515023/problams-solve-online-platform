#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    set<int> st;

    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        st.insert(ar[i]);
    }
    if (st.size() == 1)
    {
        cout << -1 << endl;
        return;
    }
    int cnt = 0;
    int ans = 1e10;
    for (int i = 1; i < n; i++)
    {
        cnt++;
        if (ar[i] != ar[i - 1])
        {
            ans = min(ans, cnt);
            cnt = 0;
            i++;
        }
    }

    int x = -1, y = -1;
    for (int i = 0; i < n - 1; i++)
    {
        if (ar[i] != ar[i + 1])
        {
            x = i + 1;
            break;
        }
    }
    for (int i = n - 1; i > 1; i--)
    {
        if (ar[i] != ar[i - 1])
        {
            y = n - i;
            break;
        }
    }
    ans = min({ans, x, y});
    cout << ans << endl;
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