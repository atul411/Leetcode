#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    while (t--) {
        int n;
        cin >> n;
        vector<long long> arr(n);
        long long sum = 0;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
            if (i < n - 2) {
                sum += arr[i];
            };
        }
        cout << (arr[n - 1] - arr[n - 2] + sum) << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}