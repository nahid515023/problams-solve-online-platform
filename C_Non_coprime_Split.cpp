#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 100000;
vector<int> lp(N + 1);
vector<int> pr;
set<int> p;

void linear_sieve()
{
    for (int i = 2; i <= N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr.push_back(i);
            p.insert(i);
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

int prime_fact(int x)
{
    for (int i = 0; i < pr.size() && pr[i] * pr[i] <= x; i++)
    {
        while (x % pr[i] == 0)
        {
            x /= pr[i];
            return x;
        }
    }
    if (x > 1)
    {
        p.insert(x);
    }
    return x;
}

void solve()
{
    int l, r;
    cin >> l >> r;
    if (r % 2 == 0 || l < r)
    {
        int x, y;
        if (r % 2 == 0)
        {
            x = r / 2;
            y = r / 2;
        }
        else
        {
            x = (r - 1) / 2;
            y = x;
        }
        if (__gcd(x, y) > 1)
        {
            cout << x << " " << y << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    else
    {
        if (p.find(l) == p.end())
        {
            int x = prime_fact(l);
            int y = l - x;
            if (x == l)
            {
                cout << -1 << endl;
                return;
            }
            if (__gcd(x, y) > 1)
            {
                cout << x << " " << y << endl;
                return;
            }
            else
            {
                cout << -1 << endl;
            }
        }
        else
        {
            cout << -1 << endl;
        }
    }
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // #ifndef ONLINE_JUDGE
    //     freopen("input.txt", "r", stdin);
    //     freopen("output.txt", "w", stdout);
    // #endif
    int t = 1;
    cin >> t;
    linear_sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}