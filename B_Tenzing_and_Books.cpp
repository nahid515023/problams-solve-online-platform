#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n), c(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> b[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> c[i];
    }

    int ans = 0;

    for (int i = 0; i < n; i++)
    {
        if ((k & a[i]) != a[i])
        {
            break;
        }
        ans |= a[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((k & b[i]) != b[i])
        {
            break;
        }
        ans |= b[i];
    }
    for (int i = 0; i < n; i++)
    {
        if ((k & c[i]) != c[i])
        {
            break;
        }
        ans |= c[i];
    }
    if (ans == k)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}