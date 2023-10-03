#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> a(n), b(m);
    for (auto &x : a)
        cin >> x;
    for (auto &y : b)
        cin >> y;

    sort(a.begin(), a.end());
    sort(b.begin(), b.end());

    int s = accumulate(a.begin(), a.end(), 0);

    if (k & 1)
    {
        if (a.front() < b.back())
        {
            s += b.back();
            s -= a.front();
        }
    }
    else
    {
        if(a.front()>=b.back())
        {
            s-=a.back();
            s+=b.front();
        }
        else{
            
            s-=a.front();
            s+=b.back();
            if(a.back()>b.back())
            {
                s-=a.back();
                s+=b.front();
            }
            else{
                s-=b.back();
                if(a.front()<b.front())
                s+=a.front();
                else
                s+=b.front();
            }

        }

    }
    cout << s << endl;
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