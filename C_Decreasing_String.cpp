#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll n;
    string s;
    cin >> s;
    cin >> n;
    ll a = s.size();
    ll cnt = 0;
    ll x = 0;
    ll t=n;


    while (n>a)
    {
        x += a;
        cnt++;
        n -= a;
        a--;
    }
    

    string st;
    for (char c : s)
    {
        while (!st.empty() && st.back() > c && cnt > 0)
        {
            st.pop_back();
            cnt--;
        }
        st.push_back(c);
    }
    while (cnt)
    {
        st.pop_back();
        cnt--;
    }
    // cout<<x<<endl;

    cout << st[t-x-1];
}

int main()
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