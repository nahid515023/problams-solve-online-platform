#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 20000000;
vector<int> lp(N + 1);
vector<int> pr;

map<int, int> mp;
unordered_set<int> us;
int cnt = 1;
void linear_sieve()
{
    for (int i = 2; i <= N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr.push_back(i);
            us.insert(i);
            if (us.find(i - 2) != us.end())
            {
                mp[cnt] = i;
                cnt++;
            }
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

void solve(int n)
{
    auto x = mp[n];
    cout << "(" << x - 2 << ", " << x << ")" << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    linear_sieve();
    while (cin >> t)
    {
        solve(t);
    }
    return 0;
}