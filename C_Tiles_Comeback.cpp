#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{

    int tt = 1;
    cin >> tt;
    while (tt--)
    {
        int n, k;
        cin >> n >> k;
        vector<int> v(n + 2);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int i = 0;
        int c = 0;
        while (i < n && c < k)
        {
            if (v[0] == v[i])
            {
                c++;
            }
            i++;
        }

        int j = n - 1;
        int d = 0;
        while (j > 0 && d < k)
        {
            if (v[n - 1] == v[j])
            {
                d++;
            }
            j--;
        }

        if ((i - 1 < j + 1 && c == k && d == k && v[0] != v[n - 1]))
        {
            cout << "YES" << endl;
        }
        else if ((v[0] == v[n - 1] && c == k))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}