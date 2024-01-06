#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    int x = *max_element(ar, ar + n)+5;
    int y = x;
    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        if (y < x)
        {
            swap(x, y);
        }
        if (ar[i] <= x)
        {
            x = ar[i];
        }
        else if (ar[i] <= y)
        {
            y = ar[i];
        }
        else
        {
            cnt++;
            x = ar[i];
        }
    }
    cout << cnt << endl;
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