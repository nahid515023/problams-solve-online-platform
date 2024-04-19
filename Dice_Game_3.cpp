#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int ans = 0;
        if (n & 1)
        {
            ans += 6;
            n--;
        }

        ans += (n / 2) * 12;
        ans += (n / 2);
        cout << ans << endl;
    }
}
