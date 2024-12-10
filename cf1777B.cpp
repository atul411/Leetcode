#include <bits/stdc++.h>
using namespace std;

const int mod = 1000000007;
void test_case() {
    long long n;
    cin >> n;
    long long ans = 1;
    for (long long i = 1; i <= n; i++) {
        ans = (ans%mod * i%mod) % mod;
    }
    long long a = (n%mod * (n - 1)%mod) % mod;
    cout << (a%mod * ans%mod) % mod << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}