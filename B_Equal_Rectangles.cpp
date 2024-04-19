#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    vector<int> v(10005, 0);

    for (int i = 0; i < n * 4; i++)
    {
        int x;
        cin >> x;
        v[x]++;
    }

    int l = 0, h = 10002;
    set<int> st;
    set<pair<int, int>> sp;

    while (l < h)
    {
        if(v[l]>0){
            sp.insert({v[l],l});
        }
        if(v[h]>0){
            sp.insert({v[h],h});
        }

        if (v[l] == 0)
            l++;
        else if (v[h] == 0)
            h--;
        else
        {
            if (v[l] == v[h] && (v[l]+v[h])%4==0)
            {
                sp.erase({v[l],l});
                sp.erase({v[h],h});

                st.insert(l * h);
                if (st.size() > 1)
                {
                    cout << "NO" << endl;
                    return;
                }
                l++;
                h--;
            }
            else
            {
                cout << "NO" << endl;
                return;
            }
        }
    }
    if(sp.size()>0){
        int x = sp.begin()->first;
        int y = sp.begin()->second;
        int ar = *st.begin();
        if(x%4!=0 || (st.size()>0 &&ar!=y*y) ){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout << "YES" << endl;
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