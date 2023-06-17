#include <bits/stdc++.h>
using namespace std;
#define int long long

void solve()
{
    int n;
    cin >> n;
    stack<int> st;
    queue<int> qu;
    priority_queue<int> pq;
    int d = 0, cnt = 0, t = 0,xx=-1;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        if (a == 1)
        {
            st.push(b);
            qu.push(b);
            pq.push(b);
            t++;
            xx++;
        }
        else
        {

            cnt++;
            if(xx<0)
            {
                cout<<"impossible"<<endl;
                return;
            }

            if (st.top() == b)
            {
                st.pop();
            }
            if (qu.front() == b)
            {
                qu.pop();
            }
            if (pq.top() == b)
            {
                pq.pop();
            }
            xx--;
        }
    }
    int x = st.size();
    int y = qu.size();
    int z = pq.size();
    cnt = t - cnt;
    if (cnt < 0)
    {
        cout << "impossible" << endl;
        return;
    }

    // cout<<x<<" "<<y<<" "<<z<<endl;
    if (x != cnt && y != cnt && z != cnt)
    {
        cout << "impossible" << endl;
    }
    else if (x == cnt && y != cnt && z != cnt)
    {
        cout << "stack" << endl;
    }
    else if (x != cnt && y == cnt && z != cnt)
    {
        cout << "queue" << endl;
    }
    else if (x != cnt && y != cnt && z == cnt)
    {
        cout << "priority queue" << endl;
    }
    else
    {
        cout << "not sure" << endl;
    }
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
    int t = 1;
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}