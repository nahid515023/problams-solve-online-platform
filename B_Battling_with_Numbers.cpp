#include<bits/stdc++.h>
using namespace std;
#define int long long int
const int mod = 998244353;
const int N = 2e6 + 7;

long long binpow(long long a, long long b) {
   if (b == 0)
      return 1;
   long long res = binpow(a, b / 2);
   if (b % 2)
      return ((res % mod) * (res % mod) * (a % mod)) % mod ;
   else
      return ((res % mod) * (res % mod)) % mod;
}


int32_t main()
{
   int n, m, x = 1, y = 1, i;

   vector<int>a(N), b(N);

   cin >> n;
   int a1[n], a2[n];
   for (i = 0; i < n; i++) cin >> a1[i];
   for (i = 0; i < n; i++) cin >> a2[i];
   for (i = 0; i < n; i++) a[a1[i]] = a2[i];

   cin >> m;
   int b1[m], b2[m];
   for (i = 0; i < m; i++) cin >> b1[i];
   for (i = 0; i < m; i++) cin >> b2[i];
   for (i = 0; i < m; i++) b[b1[i]] = b2[i];

   vector <int> arr(N), brr(N);

   for (i = 0; i < N; i++)
   {
      if (a[i] != b[i])
      {
         if (a[i] > b[i]) arr[i] = a[i] - b[i];
         else brr[i] = b[i] - a[i];
      }
   }

   for (i = 0; i < N; i++)
   {
      if (arr[i] != 0) x *= binpow(i, arr[i]);
      if (brr[i] != 0) y *= binpow(i, brr[i]);
      x %= mod;
      y %= mod;
   }

   int gc, lc;
   gc = __gcd(x, y);
   lc = x * y / gc;

//   cout<<x<<" "<<y<<endl;
//   cout<<gc<<" "<<lc<<endl;


   if (lc == x && gc == y)
   {
      if (x == y)
      {
         cout << 1 << endl;
      }

      else
      {
         int c = 0;
         for (i = 0; i < N; i++)
         {
            if ((a[i] - b[i]) != 0) c++;
         }

         int ans = binpow(2, c);
         cout << ans % mod << endl;
      }
   }
   else
   {
      cout << 0 << endl;
   }

   return 0;
}