#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 200007;
int tree[4 * MAX];

void build(int a[], int node, int tl, int tr)
{
    if (tl == tr)
    {
        tree[node] = a[tl];
        return;
    }
    int mid = (tl + tr) / 2;
    int left = node * 2;
    int right = node * 2 + 1;
    build(a, left, tl, mid);
    build(a, right, mid + 1, tr);
    tree[node] = tree[left] & tree[right];
}

int query(int node, int tl, int tr, int b, int e)
{
    if (tl > e || tr < b)
        return 4294967295;

    if (tl >= b && tr <= e)
        return tree[node];

    int mid = (tl + tr) / 2;
    int left = node * 2;
    int right = node * 2 + 1;
    int p = query(left, tl, mid, b, e);
    int q = query(right, mid + 1, tr, b, e);
    return p & q;
}

void solve()
{
    int n;
    cin >> n;
    int a[n+5];
    for (int i = 1; i <= n; i++)
        cin >> a[i];
    build(a,1,1,n);
    int q;
    cin>>q;
    while (q--)
    {
        int l,k;
        cin>>l>>k;

        int hi=n,lo=l;
        int ans=-1;


        while (lo<=hi)
        {
            int m = (lo+hi)/2;
            int x = query(1,1,n,l,m);
            if(x>=k)
            {
                ans = m;
                lo=m+1;
            }
            else{
                hi=m-1;
            }
        }
        cout<<ans<<" ";
        
    }
    cout<<endl;
    
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