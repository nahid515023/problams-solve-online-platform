#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    vector<int> ar(27, 0);
    for (int i = 0; i < n; i++)
    {
        ar[s[i] - 'a']++;
    }
    int mx = *max_element(ar.begin(), ar.end());

    vector<int> pr;
    pr.push_back(2);

    for (int i = 3; i <= n; i += 2)
    {
        bool ok = 1;
        for (int j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                ok = 0;
                break;
            }
        }
        if (ok)
        {
            pr.push_back(i);
        }
    }
    int cnt = 0;
    set<int> st;

    for (int &x : pr)
    {
        if (x >= n)
        {
            break;
        }
        if (n / x > 1)
        {
            int val = x;
            while (val <= n)
            {
                st.insert(val);
                val += x;
            }
        }
    }
    cnt = st.size();
    // cout << cnt << endl;
    if (cnt <= mx)
    {
        cout << "YES" << endl;
        string ans = string(n, '0');
        int inx = max_element(ar.begin(), ar.end()) - ar.begin();
        set<int> aa;
        for (int i = 0; i < n; i++)
        {
            if (st.count(i + 1))
            {
                continue;
            }
            aa.insert(i);
        }
        for (auto &x : st)
        {
            ans[x - 1] = 'a' + inx;
            ar[inx]--;
        }
        for (int i = 0; i < 26; i++)
        {

            while (ar[i] > 0)
            {
                ans[*aa.begin()] = 'a' + i;
                --ar[i];
                aa.erase(aa.begin());
            }
        }
        cout << ans << endl;
    }
    else
    {
        cout << "NO" << endl;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}