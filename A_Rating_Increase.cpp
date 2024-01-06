#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    cin >> s;

    n = s.size();

    ll zero = 0, one = 0;

    for (i = 0; i < n; i++)
    {

        if (s[i] == '0')
        {
            zero++;
        }
        if (s[i] == '1')
        {
            one++;
        }
    }

    if (zero == one)
    {
        cout << 0 << endl;
        return;
    }

    if (one > zero)
    {

        p = zero;

        q = 0, r = 0;

        for (i = 0; i < n; i++)
        {

            if (s[i] == '0')
            {
                q++;
            }
            if (s[i] == '1')
            {
                r++;
            }

            if (q > p)
            {
                q--;
                break;
            }

            if (r > p)
            {
                r--;
                break;
            }
        }

        ans = one - zero + (p - q) + (p - r);
    }

    if (zero > one)
    {

        p = one;

        q = 0, r = 0;

        for (i = 0; i < n; i++)
        {

            if (s[i] == '0')
            {
                q++;
            }
            if (s[i] == '1')
            {
                r++;
            }

            if (q > p)
            {
                q--;
                break;
            }

            if (r > p)
            {
                r--;
                break;
            }
        }

        ans = zero - one + (p - q) + (p - r);
    }

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