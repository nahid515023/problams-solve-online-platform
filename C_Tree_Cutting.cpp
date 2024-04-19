#include "bits/stdc++.h"
using namespace std;
const int N=1e5+5;
vector<int> e[N];
int sz[N], f[N];
int t, n, m, l, r, mid, i, j, cnt;
void dfs(int u)
{
	sz[u]=1;
	for (int v:e[u]) if (v!=f[u])
	{
		f[v]=u;
		dfs(v);
		sz[u]+=sz[v];
	}
	if (sz[u]>=mid) ++cnt, sz[u]=0;
}
int main()
{
	ios::sync_with_stdio(0); cin.tie(0);
	cin>>t;
	while (t--)
	{
		cin>>n>>m;
		for (i=1; i<=n; i++) e[i].clear();
		for (i=1; i<n; i++)
		{
			int u, v;
			cin>>u>>v;
			e[u].push_back(v);
			e[v].push_back(u);
		}
		l=1, r=n;
		while (l<r)
		{
			mid=(l+r+1)/2;
			cnt=0;
			dfs(1);
			if (cnt>=m+1) l=mid;
			else r=mid-1;
		}
		cout<<l<<'\n';
	}
}
