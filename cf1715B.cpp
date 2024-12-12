#include <bits/stdc++.h>
using namespace std;

void test_case() {
    long long n, k, b, sum;
    cin >> n >> k >> b >> sum;
    if (sum < k * b or sum > (k * b + n * (k - 1))) {
        cout << "-1\n";
    } else {
        long long curr;
        if (k * b + k - 1 < sum) {
            curr = (k * b + k - 1);
            sum -= curr;
        } else {
            curr = sum;
            sum = 0;
        }
        for (int i = 0; i < n; i++) {
            if (i == 0) {
                cout << curr << " ";
            } else if (sum - k + 1 > 0) {
                cout << k - 1 << " ";
                sum -= k - 1;
            } else {
                cout << sum << " ";
                sum = 0;
            }
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}