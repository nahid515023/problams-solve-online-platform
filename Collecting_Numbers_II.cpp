#include <bits/stdc++.h>
using namespace std;
#define int long long
int n, q;

int ckl(int x, int ar[], int a[])
{
    int aa = ar[a[x]];
    int bb = ar[a[x]-1];
    if (a[x]>1 && ar[a[x]] < ar[a[x]-1])
    {
        return 1;
    }
    return 0;
}

int ckr(int x, int ar[], int a[])
{
    if (a[x] < n && ar[a[x]] > ar[a[x]+1])
    {
        return 1;
    }
    return 0;
}

void solve()
{
    cin >> n >> q;
    int ar[n + 1];
    int a[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i];
        ar[a[i]] = i;
    }
    int cnt = 1;
    for (int i = 1; i < n; i++)
    {
        if (ar[i] > ar[i + 1])
        {
            cnt++;
        }
    }
    while (q--)
    {
        int x, y;
        cin >> x >> y;
        int val = ckl(x,ar,a)+ckr(x,ar,a)+ckl(y,ar,a)+ckr(y,ar,a);
        if(abs(a[x]-a[y])==1)
        {
            val-=ckl(x,ar,a);
        }
        cout<<val<<" ";
        swap(ar[a[x]],ar[a[y]]);
        swap(a[x],a[y]);


        int val2 = ckl(x,ar,a)+ckr(x,ar,a)+ckl(y,ar,a)+ckr(y,ar,a);
        if(abs(a[x]-a[y])==1)
        {
            val2-=ckl(y,ar,a);
        }

        cnt-=val;
        cnt+=val2;
        cout<<val2<<endl;

        cout<<cnt<<endl;
    }
}

int32_t main()
{
    int t = 1;
//    freopen("input.txt", "r", stdin);

    while (t--)
    {
        solve();
    }
    return 0;
}