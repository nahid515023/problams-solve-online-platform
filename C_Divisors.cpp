#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 1000000;
vector<int> lp(N + 1);
vector<int> pr;
void prime()
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

void solve()
{
    int n;
    cin >> n;
    int aa = n;
    vector<int> v;

    for (int i = 0; pr[i] * pr[i] <= n; i++)
    {
        int cnt = 0;
        while (n % pr[i] == 0)
        {
            n /= pr[i];
            cnt++;
        }
        if (cnt > 0)
        {
            v.push_back(cnt);
        }
    }
    if (n > 1)
    {
        v.push_back(1);
    }

    int ans = 1;
    for (int x : v)
    {
        ans *= (x + 1);
    }
    cout << ans << endl;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t = 1;
    cin >> t;
    prime();
    while (t--)
    {
        solve();
    }
    return 0;
}