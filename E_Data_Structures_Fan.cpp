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

    int pre[n + 5];
    fill(pre, pre + n + 5, 0);
    int x1 = 0, x0 = 0;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        pre[i + 1] = pre[i] ^ ar[i];
        if (s[i] == '0')
        {
            x0 ^= ar[i];
        }
        else
        {
            x1 ^= ar[i];
        }
    }

    int q;
    cin >> q;
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int a, b;
            cin >> a >> b;
            x0 ^= (pre[b] ^ pre[a - 1]);
            x1 ^= (pre[b] ^ pre[a - 1]);
        }
        else
        {
            int a;
            cin >> a;
            if (a == 1)
            {
                cout << x1 << " ";
            }
            else
            {
                cout << x0 << " ";
            }
        }
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