#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    long long ans = LLONG_MIN, maxPositive = 0, maxNegative = 0, temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        ans = max(abs(maxPositive + temp), abs(maxNegative + temp));
        maxPositive = ans;
        maxNegative = maxNegative + temp;
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