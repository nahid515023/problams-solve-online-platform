#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int one = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '1')
        {
            one++;
        }
    }
    int zero = s.size() - one;

    if (s.size() == 1)
    {
        cout << 1 << endl;
    }
    else if (one == zero)
    {
        cout << 0 << endl;
    }
    else if (one == 0 || zero == 0)
    {
        cout << max(one, zero) << endl;
    }
    else
    {
        int mi = min(one, zero);
        int mx = max(one, zero);
        int ans = mx - mi;
        // cout<<mx<<" "<<mi<<endl;
        int a = 0, b = 0;
        int i = 0;
        while (i < s.size() && a <= mi && b <= mi)
        {
            if (s[i] == '0')
            {
                a++;
            }
            else
            {
                b++;
            }
            i++;
        };
        if(a>mi) a--;
        if(b>mi) b--;
        ans = ans + (mi - a) + (mi - b);
        cout << ans << endl;
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