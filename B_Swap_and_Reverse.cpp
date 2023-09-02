#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;

    if (k % 2 == 0)
    {
        sort(s.begin(), s.end());
        cout << s << endl;
    }
    else
    {
        int arr[30][2];
        memset(arr,0,sizeof(arr));
        string str = " ";

        
        for (int i = 0; i < n; i++)
        {
            arr[s[i] - 'a'][i % 2]++;
        }


        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 26; j++)
            {
                if (arr[j][i % 2] > 0)
                {
                    arr[j][i % 2]--;
                    str += (j + 'a');
                    break;
                }
            }
        }
        cout << str << endl;
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