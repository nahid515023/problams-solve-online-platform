#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
    int t = 1;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        int odd = 0;
        ll sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum += a[i];
            if (a[i] & 1)
            {
                odd++;
            }
            if (i == 0)
            {
                cout << a[i] << " ";
            }
            else
            {
                int xx = odd / 3;
                if (odd % 3 == 1)
                {
                    xx++;
                }
                cout << sum - xx << " ";
            }
        }
        cout << endl;
    }
    return 0;
}