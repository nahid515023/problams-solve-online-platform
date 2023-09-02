#include <bits/stdc++.h>
using namespace std;
#define int long long

int32_t main()
{
    string s;
    int n;
    while (cin >> s >> n)
    {
        int l = s.size();

        for (int i = l - 1; i >= 0; i--)
        {
            if (s[i] >= '0' && s[i] <= '9')
            {
                int x = n % 10;
                n /= 10;
                int v = (s[i] - '0') + x;
                n += (v / 10);
                v = v % 10;
                s[i] = ('0' + v);
            }
            else if (s[i] >= 'a' && s[i] <= 'z')
            {
                int x = n % 26;
                n /= 26;
                int v = (s[i] - 'a') + x;
                n += (v / 26);
                v = (v % 26);
                s[i] = ('a' + v);
            }
            else
            {
                int x = n % 26;
                n /= 26;
                int v = (s[i] - 'A') + x;
                n += (v / 26);
                v = (v % 26);
                s[i] = ('A' + v);
            }
            if (i == 0 && n > 0)
            {
                string rr;

                if (s[0] >= 'A' && s[0] <= 'Z')
                {
                    while (n > 0)
                    {
                        if (n > 26)
                            rr.push_back('A'+(n%26));
                        else
                        {
                            rr.push_back(('A' + n - 1));
                        }
                        n /= 26;
                    }
                }
                else if (s[i] >= 'a' && s[i] <= 'z')
                {
                    while (n > 0)
                    {
                        if (n > 26)
                            rr.push_back('a'+(n%26));
                        else
                        {
                            rr.push_back(('a' + n - 1));
                        }
                        n /= 26;
                    }
                }
                else
                {
                    while (n > 0)
                    {
                        if (n <= 9)
                        {
                            rr.push_back(char('0' + n));
                        }
                        else
                        {
                            rr.push_back('0'+(n%10));
                        }
                        n /= 10;
                    }
                }
                reverse(rr.begin(), rr.end());
                cout << rr;
            }
        }
        cout << s << endl;
    }
    return 0;
}