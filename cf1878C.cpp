#include <bits/stdc++.h>
using namespace std;
#define ll long long

void test_case() {
    ll n, k, x;
    cin >> n >> k >> x;
    ll mx = (2 * n - k + 1) * k / 2;
    ll mn = k * (k + 1) / 2;
    if (x >= mn and x <= mx) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}