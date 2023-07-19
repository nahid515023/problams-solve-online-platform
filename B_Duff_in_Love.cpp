#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1000000;
vector<int> lp(N + 1);
vector<int> pr;

map<int, int> mp;

void linear_sieve()
{
    for (int i = 2; i <= N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j = 0; i * pr[j] <= N; ++j)
        {
            lp[i * pr[j]] = pr[j];
            if (pr[j] == lp[i])
            {
                break;
            }
        }
    }
}

void prime_fact(int x)
{
    for (int i = 0; i < pr.size() && pr[i] * pr[i] <= x; i++)
    {
        while (x % pr[i] == 0)
        {
            x /= pr[i];
            mp[pr[i]]++;
        }
    }
    if (x > 1)
    {
        mp[x]++;
    }
}

void solve()
{
    int n;
    cin >> n;
    prime_fact(n);
    int ans = 1;
    for (auto [x, y] : mp)
    {
        ans *= x;
    }
    cout << ans << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    // cin >> t;
    linear_sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}