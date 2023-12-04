

#include<bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>

using namespace std;
using namespace __gnu_pbds;

#define  Sezar  ios_base::sync_with_stdio(false), cin.tie(NULL), cout.tie(NULL)
#define  tc(t)  int t; cin >> t; while (t--)
#define  ll     long long

typedef  vector<int> vi;
typedef  vector<ll> vll;
typedef  pair<int, int> pii;
typedef  pair<ll, ll> pll;
typedef tree<int, null_type, less<int>, rb_tree_tag,
        tree_order_statistics_node_update>
        new_data_set;

#define    all(v)         (v).begin(),(v).end()
#define    all1(v)        (v).begin()+1,(v).end()
#define    sort0(v)       sort(all(v))
#define    pb             emplace_back
#define    ppb            pop_back
#define    mkp            make_pair

#define    for0(i,n)      for (int i = 0; i < n; i++)
#define    forr(i,a,b)    for(i=a;i<=b;i++)

#define    yes            cout << "YES" << endl;
#define    no             cout << "NO" << endl;
#define    endl           "\n"
#define    infinity       9999999999999
const      ll mod = 998244353;

ll inv(ll i) {if (i == 1) return 1; return (mod - ((mod / i) * inv(mod % i)) % mod) % mod;}

ll mod_mul(ll a, ll b) {a = a % mod; b = b % mod; return (((a * b) % mod) + mod) % mod;}

ll mod_add(ll a, ll b) {a = a % mod; b = b % mod; return (((a + b) % mod) + mod) % mod;}

ll gcd(ll a, ll b) { if (b == 0) return a; return gcd(b, a % b);}

ll lcm(ll a, ll b) {return (a * b) / gcd(a, b);}

ll ceil_div(ll a, ll b) {return a % b == 0 ? a / b : a / b + 1;}

ll pwr(ll a, ll b) {a %= mod; ll res = 1; while (b > 0) {if (b & 1) res = (res * a) % mod; a = (a * a ) % mod; b >>= 1;} return res;}


void solution()
{
    int n;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++){
        int x;
        cin >> x;
        arr.pb(x);
    }
    stack<int> st;
    int cur = arr[n - 1];
    int i = n - 2;
    int ans = 0;
    while(i>=0){

        st.push(arr[i]);
        while(!st.empty()){
            int topp = st.top();
            st.pop();
            //cout << "topp: " << topp << "  cur: " << cur << endl;
            if(topp<=cur){
                cur = topp;
            }
            else{
                int mx, mn;
                if(topp&1){
                    mx = (topp / 2) + 1;
                    mn = topp / 2;
                }
                else{
                    mx = topp / 2;
                    mn = topp / 2;
                }
                mx = max(mx, mn);
                mn = min(mx, mn);
                //cout << "min: " << mn << " mx: " << mx << endl;
                if(mn<=topp){
                    st.push(mx);
                    st.push(mn);
                }
                else{
                    st.push(mn);
                    st.push(mx);
                }
                ans++;
            }
        }
        //cout << "val: " << arr[i] << " cur: " << cur << endl;
        i--;
    }

    //cout << "i: " << i << endl;
    cout << ans << endl;
}

int main()
{
    Sezar;
    tc(t) solution();
    // solution();
}




















// #include <bits/stdc++.h>
// using namespace std;
// #define int long long

// void solve()
// {
//     int n;
//     cin >> n;
//     vector<int> v(n);
//     for (auto &x : v)
//         cin >> x;

//     int mi = *min_element(v.begin(), v.end());

//     int i = find(v.begin(), v.end(), mi) - v.begin();
//     int x = i;

//     bool ok=1;

//     for(;i<n-1;i++)
//     {
//         if(v[i]>v[i+1]){
//             ok=0;
//             break;
//         }
//     }

//     if (ok)
//     {
//         cout << x << endl;
//     }
//     else
//     {
//         cout << -1 << endl;
//     }
// }

// int32_t main()
// {
//     ios_base::sync_with_stdio(false);
//     cin.tie(NULL);
//     // #ifndef ONLINE_JUDGE
//     // freopen("input.txt", "r", stdin);
//     // freopen("output.txt", "w", stdout);
//     // #endif
//     int t = 1;
//     cin >> t;
//     while (t--)
//     {
//         solve();
//     }
//     return 0;
// }