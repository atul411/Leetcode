#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    double arr[n];
    for (auto &i : arr) {
        cin >> i;
    }
    double diff = 0, sum = arr[0], ans = 0;
    for (int i = 1; i < n; i++) {
        double temp = 100 * arr[i] / k;
        if (sum < temp) {
            ans = max(ans, temp - sum);
        }
        sum += arr[i];
    }

    printf("%lld\n", (long long)ceil(ans));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}