#include <bits/stdc++.h>
using namespace std;
#define int long long

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    int sum = accumulate(arr.begin(), arr.end(), 0LL);
    int i;
    for (i = n; i >= 1; i--) {
        if (sum % i != 0) {
            continue;
        }
        int curr = 0, index = 0, target = sum / i, solved = 1;
        while (index < n) {
            curr += arr[index];
            if (curr == target) {
                curr = 0;
            } else if (curr > target) {
                solved = -1;
            }
            index++;
        }
        if (solved == 1) break;
    }
    cout << arr.size() - i << "\n";
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}