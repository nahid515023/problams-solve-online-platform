#include <bits/stdc++.h>
using namespace std;

int main()
{
	int i, n, ans = 0, c = 0;
	cin >> n;

	string s, t;
	cin >> s >> t;

	for ( i = 0; i < n; i++)
	{
		if (s[i] == t[i] )
		{
			if (c) ans++;
			c = 0;
		}
		else
		{
			c++;
		}
	}

	if (c) ans++;

	cout << ans << endl;
	return 0;
}