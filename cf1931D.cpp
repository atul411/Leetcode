#include <bits/stdc++.h>
using namespace std;

void test_case() {
    long long n, x, y, ans = 0;
    cin >> n >> x >> y;
    map<pair<int, int>, long long> mp;
    long long number;
    for (int i = 0; i < n; i++) {
        cin >> number;
        long long a = (x - number % x) % x;
        long long b = number % y;
        ans += mp[{a, b}];
        mp[{number % x, b}]++;
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}