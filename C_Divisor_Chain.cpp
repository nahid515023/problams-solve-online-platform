#include <bits/stdc++.h>
using namespace std;
#define int long long

const int N = 100000;
vector<int> lp(N + 1);
vector<int> pr;
set<int> st;

void linear_sieve()
{
    for (int i = 2; i <= N; ++i)
    {
        if (lp[i] == 0)
        {
            lp[i] = i;
            pr.push_back(i);
            st.insert(i);
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

    vector<int> v;
    int x = 1;
    int val = x;
    while (x <= n)
    {
        val = x;
        v.push_back(x);
        x = x * 2;
    }

    if (val < n)
    {
        int rm = n - val;
        if (rm % 2 == 1)
        {
            val++;
            v.push_back(val);
            rm--;
        }

        for (int i = 31; i >= 0; i--)
        {
            int aa = rm & 1 << i;
            if (aa > 0)
            {
                val += 1<<i;
                v.push_back(val);
            }
        }
    }

    reverse(v.begin(), v.end());
    cout << v.size() << endl;
    for (auto &xx : v)
    {
        cout << xx << " ";
    }
    cout << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("input.txt", "r", stdin);
    int t = 1;
    cin >> t;
    linear_sieve();
    while (t--)
    {
        solve();
    }
    return 0;
}