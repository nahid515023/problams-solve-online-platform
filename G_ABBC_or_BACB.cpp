#include <bits/stdc++.h>
using namespace std;
#define int long long

bool cmp(const pair<int, int> &a, const pair<int, int> &b)
{
    return a.second > b.second;
}

void solve()
{
    string s;
    cin >> s;
    int n = s.size();
    stack<char> st;
    int i = 0;
    vector<pair<char, int>> v, a, b;

    while (n > i)
    {
        if (st.empty() || st.top() == s[i] && st.top() != 'B')
        {
            st.push(s[i]);
            i++;
        }
        else
        {
            v.push_back({st.top(), st.size()});
            if (st.top() == 'A')
            {
                a.push_back({st.top(), st.size()});
            }
            else
            {
                b.push_back({st.top(), st.size()});
            }
            while (!st.empty())
            {
                st.pop();
            }
        }
    }
    v.push_back({st.top(), st.size()});
    if (st.top() == 'A')
    {
        a.push_back({st.top(), st.size()});
    }
    else
    {
        b.push_back({st.top(), st.size()});
    }
    sort(a.begin(), a.end(),cmp);

    int ans =0;

    if(b.size()<a.size())
    {
        for(int i=0;i<b.size();i++)
        {
            ans+=a[i].second;
        }
    }
    else{
        for(int i=0;i<a.size();i++)
        {
            ans+=a[i].second;
        }
    }
    cout<<ans<<endl;
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