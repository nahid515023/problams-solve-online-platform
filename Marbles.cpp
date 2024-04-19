#include <bits/stdc++.h>

using namespace std;

int main() {
    // freopen("input.txt", "r", stdin);
    int t;
    cin >> t;
    while (t--) {

        int a, b;
        cin >> a >> b;
        int x = a, y = b;
        int ans = b - 1;

        int cnt = 0;
        bool ok = 0;

        while (x > y) {
            ok = 1;
            if (x % y == 0) {
                break;
            }
            cnt++;
            x--;
            y++;
        }
        if(x<y) ok=0;
        if (ok)
            ans = min(ans, cnt);

        cnt = 0;
        x = a;
        y = b;
        ok = 0;
        while (y > 1) {
            ok = 1;
            if (x % y == 0) {
                break;
            }
            cnt++;
            x++;
            y--;
        }
        if (ok)
            ans = min(ans, cnt);
        cout << ans << endl;
    }

}