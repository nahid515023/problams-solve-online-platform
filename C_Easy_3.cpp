#include <bits/stdc++.h>
using namespace std;
#define int long long
int tree[4 * 200007];
int ar[200007];
int n;

void build(int node, int b, int e)
{
    if (b > e)
        return;
    if (b == e)
    {
        tree[node] = ar[b];
        return;
    }
    int m = (b + e) / 2;
    build(node * 2, b, m);
    build(node * 2 + 1, m + 1, e);
    tree[node] = tree[node * 2] + tree[node * 2 + 1];
}

void update(int node, int s, int e, int rs, int re, int val)
{

    if (s > e || s > re || e < rs)
        return;

    if (s >= rs && e <= re)
    {
        tree[node] = val;
        return;
    }

    int m = (s + e) / 2;
    update(node * 2, s, m, rs, re, val);
    update(node * 2 + 1, m + 1, e, rs, re, val);
    tree[node] = tree[2 * node] + tree[2 * node + 1];
}

int query(int node, int s, int e, int rs, int re)
{
    if (s > e || s > re || e < rs)
        return 0;
    if (s >= rs && e <= re)
    {
        return tree[node];
    }

    int m = (s + e) / 2;
    return max(query(node * 2, s, m, rs, re),
               query(node * 2 + 1, m + 1, e, rs, re));
}

void solve()
{
    int q;
    cin >> n >> q;
    for (int i = 1; i <= n; i++)
        cin >> ar[i];
    build(1, 1, n);
    while (q--)
    {
        int x;
        cin >> x;
        if (x == 1)
        {
            int a, b, u;
            cin >> a >> b >> u;
            update(1, 1, n, a, b, u);
        }
        else
        {
            int inx;
            cin >> inx;
            cout << query(1, 1, n, inx, inx) << endl;
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
    // cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}