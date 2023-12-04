#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if (a == b && b == c)
    {
        cout << "1 1 1" << endl;
        return;
    }

    if (b%2==1)
    {
        int x = (b + c) / 2;
        if (x - min(b, c) <= a)
        {
            cout << "1 ";
        }
        else
        {
            cout << "0 ";
        }
    }
    else
    {
        cout << "0 ";
    }

    if ((a + c) % 2 == 0)
    {
        int x = (a + c) / 2;
        if (x - min(a, c) <= b)
        {
            cout << "1 ";
        }
        else
        {
            cout << "0 ";
        }
    }
    else
    {
        cout << "0 ";
    }

    if ((b + a) % 2 == 0)
    {
        int x = (b + a) / 2;
        if (x - min(b, a) <= c)
        {
            cout << "1 ";
        }
        else
        {
            cout << "0 ";
        }
    }
    else
    {
        cout << "0 ";
    }
    cout << endl;
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