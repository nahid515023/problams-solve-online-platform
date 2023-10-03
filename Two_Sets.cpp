#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
 

    if (n == 1 || n == 5 || n%4==2 || n%4==1)
    {
        cout << "NO" << endl;
        return;
    }
    vector<int> a, b;
    if (n % 2 == 0)
    {
        int x = n;
        for (int i = 1; i <= n / 2; i++)
        {
            if (i & 1)
            {
                a.push_back(i);
                a.push_back(x);
            }
            else{
                b.push_back(i);
                b.push_back(x);
            }
                x--;
        }
    }
    else{

        for(int i=n;i>0;i--)
        {
            if(a.size()<b.size())
            {
                a.push_back(i);
            }
            else if(a.size()>b.size())
            {
                b.push_back(i);
            }
            else{
                if(a.size()==0 || a.back()<b.back())
                {
                    a.push_back(i);
                }
                else{
                    b.push_back(i);
                }
            }
        }
    }
    cout << "YES" << endl;
    cout<<a.size()<<endl;
    for(int i=0;i<a.size();i++) cout<<a[i]<<" ";
    cout<<endl;
    cout<<b.size()<<endl;
    for(int j=0;j<b.size();j++) cout<<b[j]<<" ";
    cout<<endl;
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