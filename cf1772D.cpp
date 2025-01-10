#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &a : arr) cin >> a;
    if (is_sorted(arr.begin(), arr.end())) {
        printf("0\n");
        return;
    }
    int required = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            int sum = (arr[i] + arr[i + 1]);
            int newRequired = (sum + 1) / 2;
            if (newRequired >= required) {
                required = newRequired;
            }
        }
    }
    for (auto &a : arr) {
        a = abs(a - required);
    }
    if (is_sorted(arr.begin(), arr.end())) {
        printf("%d\n", required);
    } else {
        printf("-1\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}