#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 100000 + 7;
vector<int> lp(N + 1);
vector<int> pr;

vector<int> cnt(N, 0);

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
    set<int> st;
    for (int i = 0; i < pr.size() && pr[i] * pr[i] <= x; i++)
    {
        bool ok = 0;
        while (x % pr[i] == 0)
        {
            x /= pr[i];
            ok = 1;
        }
        if (ok)
        {
            cnt[pr[i]]++;
        }
    }
}

void solve()
{
    int n;
    cin >> n;
    vector<int> nw, v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        prime_fact(x);
        v.push_back(x);
    }

    int val = 0, inx = -1;
    for (int i = 2; i < N; i++)
    {
        if (val < cnt[i])
        {
            inx = i;
            val = cnt[i];
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (v[i] % val != 0)
        {
            nw.push_back(v[i]);
        }
    }

    for (int i = 0; i < N; i++)
        cnt[i] = 0;
    cout << endl;

    for (int i = 0; i < nw.size(); i++)
    {
        prime_fact(nw[i]);
    }
    // cout << endl;

    int val2 = 0;
    int inx2 = 11;
    for (int i = 2; i < N; i++)
    {
        if (val2 < cnt[i])
        {
            inx2 = i;
            val2 = cnt[i];
        }
    }
    vector<int> aa;
    for (int i = 0; i < nw.size(); i++)
    {
        if (nw[i] % inx2 != 0)
        {
            aa.push_back(nw[i]);
        }
    }
    cout << aa.size() << endl;
    cout << inx << " " << inx2 << endl;
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
    // cin >> t;
    linear_sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}