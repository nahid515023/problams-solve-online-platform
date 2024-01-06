#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    vector<ll> s(27, 0), t(27, 0);
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
        int l = 0, r = 25;

        while (l < r)
        {
            while (s[l] == 0)
            {
                l++;
            }
            while (t[r] == 0)
            {
                r--;
            }

            if (r > l)
            {
                ok = 1;
                break;
            }
        }
        if (l == r)
        {
            if (s[l] < t[r])
            {
                ok = 1;
            }
            for (int i = l + 1; i <= 25; i++)
            {
                if (s[i] != 0)
                {
                    ok = 0;
                    break;
                }
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