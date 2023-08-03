#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        int n;
        cin >> n;
        vector<int> ar(n);
        vector<int> ck(n + 1, 1);

        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
            if (ar[i] & 1)
            {
                ck[i] = 0;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (ar[i] & 1)
            {
                ck[i] = 0;
            }
        }
        
        sort(ar.begin(), ar.end());
        bool ok = 0;

        for (int i = 0; i < n; i++)
        {
            if (ar[i] % 2 == 1 && ck[i] == 1)
            {
                cout << "NO" << endl;
                ok = 1;
                break;
            }
            if (ar[i] % 2 == 0 && ck[i] == 0)
            {
                cout << "NO" << endl;
                ok = 1;
                break;
            }
        }
        if (!ok)
            cout << "YES" << endl;
    }
    return 0;
}