#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    vector<ll> s(26, 0), t(26, 0);
    s[0] = 1;
    t[0] = 1;
    int q;
    cin >> q;
    while (q--)
    {
        int n, k;
        string x;
        cin >> n >> k >> x;
        if (n == 1)
        {
            for (char ch : x)
            {
                s[ch - 'a'] += k;
            }
        }
        else
        {
            for (char ch : x)
            {
                t[ch - 'a'] += k;
            }
        }

        bool ok = 0;

        for (int i = 25; i >= 0; i--)
        {
            if (s[i] < t[i])
            {
                ok = 1;
                break;
            }
            else if (s[i] > t[i])
            {
                break;
            }
        }
        if (ok)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

int main()
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