#include <bits/stdc++.h>
using namespace std;
#define int long long

long long SumOfDivisors(long long num) {
    long long total = 1;

    for (int i = 2; (long long)i * i <= num; i++) {
        if (num % i == 0) {
            int e = 0;
            do {
                e++;
                num /= i;
            } while (num % i == 0);

            long long sum = 0, pow = 1;
            do {
                sum += pow;
                pow *= i;
            } while (e-- > 0);
            total *= sum;
        }
    }
    if (num > 1) {
        total *= (1 + num);
    }
    return total;
}

void solve()
{
    int n;
    cin>>n;

    int ans = SumOfDivisors(n);
    cout<<ans<<endl;

    const int N = 1'000'000;              // up to 10^6
    vector<bool> is_prime(N + 1, true);
    is_prime[0] = is_prime[1] = false;

    for (int i = 2; 1LL * i * i <= N; ++i) {
        if (is_prime[i]) {
            for (long long j = 1LL * i * i; j <= N; j += i)
                is_prime[(size_t)j] = false;
        }
    }

    // Collect (or print) all primes
    vector<int>pr;
    for (int i = 2; i <= N; ++i) {
        if (is_prime[i]){
            pr.push_back(i);
        }
    }

    cout<<pr.size()<<endl;
}

int32_t main()
{
    int t = 1;
    while (t--)
    {
        solve();
    }
    return 0;
}