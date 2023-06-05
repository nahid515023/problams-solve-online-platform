#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    int ar[n];
    int inx;
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        if (ar[i] == 1)
        {
            inx = i;
        }
    }
    if (inx == 0 || inx == n - 1)
    {
        if (inx == 0)
        {
            for (int i = 0; i < n; i++)
            {
                if (ar[i] == n)
                {
                    cout << 2 << " " << i + 1 << endl;
                    return;
                }
            }
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                if (ar[i] == n)
                {
                    cout << n - 1 << " " << i + 1 << endl;
                    return;
                }
            }
        }
    }
    else
    {
        if (ar[inx + 1] == n)
        {
            for (int i = 0; i < n; i++)
            {
                if (ar[i] == n-1)
                {
                    cout << inx << " " << i + 1 << endl;
                    return;
                }
            }
        }
        else{
            if
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}