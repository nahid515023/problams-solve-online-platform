#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        ll xx = 1;
        int x = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> x;
            xx = xx * x;
        }

        if (2023 % xx == 0)
        {
            cout << "YES" << endl;
            cout << 2023 / xx << " ";

            for (int i = 1; i < k; i++)
                cout << 1 << " ";
        }
        else
            cout << "NO";

        cout << endl;
    }
    return 0;
}