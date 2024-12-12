#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    long long sum = 0, curr = 0;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        sum += curr;
    }
    long long ans = (n - sum % n) * (sum % n);
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}