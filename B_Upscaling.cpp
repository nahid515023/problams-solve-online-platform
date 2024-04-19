#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {

        if (i % 2 == 0)
        {
            for (int j = 0; j < n; j++)
            {
                if (j % 2 == 0)
                {
                    cout << "##";
                }
                else
                {
                    cout << "..";
                }
            }
            cout << endl;
            for (int j = 0; j < n; j++)
            {
                if (j % 2 == 0)
                {
                    cout << "##";
                }
                else
                {
                    cout << "..";
                }
            }
            cout << endl;
        }
        else
        {
            for (int j = 0; j < n; j++)
            {
                if (j % 2 == 1)
                {
                    cout << "##";
                }
                else
                {
                    cout << "..";
                }
            }
            cout << endl;
            for (int j = 0; j < n; j++)
            {
                if (j % 2 == 1)
                {
                    cout << "##";
                }
                else
                {
                    cout << "..";
                }
            }
            cout << endl;
        }
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
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}