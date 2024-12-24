#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void test_case() {
    int n;
    cin >> n;
    vi arr(n);
    for (auto &a : arr) {
        cin >> a;
    }
    int first = 0, second = 0;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] >= (first - second + 1)) {
            ans += (first - second + 1);
            first++;
        } else {
            while (arr[i] < (first - second + 1)) {
                second++;
            }
            ans += (first - second + 1);
            first++;
        }
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