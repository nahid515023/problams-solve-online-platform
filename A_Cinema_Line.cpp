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
    int cnt25 = 0;
    int cnt50 = 0;
    for (int i = 0; i < n; i++)
    {
        if (ar[i] == 25)
        {
            cnt25++;
            continue;
        }
        else if (ar[i] == 50)
        {
            cnt25 -= 1;
            cnt50++;
            if (cnt25 < 0)
            {
                cout << "NO" << endl;
                return;
            }
        }
        else
        {
            if (cnt50 > 0 && cnt25 > 0)
            {
                cnt50--;
                cnt25--;
            }
            else if (cnt25 > 1)
            {
                cnt25 -= 2;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    cout << "YES" << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}