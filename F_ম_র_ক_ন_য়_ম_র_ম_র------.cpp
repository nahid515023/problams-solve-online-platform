#include <bits/stdc++.h>
using namespace std;
#define int long long
int ar[50][50];
int dp[50];
int n;

int fun(int i, set<int> &st)
{

    if (n == i + 1)
    {
        int ans = 0;
        for (int k = 0; k < n; k++)
        {
            if (ar[i][k] == 1 && st.find(k) == st.end())
            {
                ans++;
            }
        }
        return ans;
    }
    else
    {
        int ans = 0;
        for (int k = 0; k < n; k++)
        {
            if (ar[i][k] == 0 || st.find(k) != st.end())
            {
                continue;
            }
            st.insert(k);
            ans += fun(i + 1, st);
            st.erase(k);
        }
        return ans;
    }
}

void solve()
{
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            ar[i][j] = 0;
        }
    }
    if (n == 1)
    {
        cout << 1 << endl;
        return;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> ar[i][j];
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        set<int> st;
        if (ar[0][i] == 1)
        {
            st.insert(i);
            ans += fun(1, st);
        }
    }
    cout << ans << " ";
}

int32_t main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        memset(dp, -1, sizeof(dp));
        solve();
    }
    cout << endl;
    return 0;
}
