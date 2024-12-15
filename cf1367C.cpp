#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    vector<long long> left(n, INT_MAX), right(n, INT_MAX);
    string str;
    cin >> str;
    if (str[0] == '1') {
        left[0] = 0;
    }
    for (int i = 1; i < n; i++) {
        if (str[i] == '1') {
            left[i] = 0;
        } else if (left[i - 1] != INT_MAX) {
            left[i] = left[i - 1] + 1;
        }
    }
    if (str[n - 1] == '1') {
        right[n - 1] = 0;
    }
    for (int i = n - 2; i >= 0; i--) {
        if (str[i] == '1') {
            right[i] = 0;
        } else if (right[i + 1] != INT_MAX) {
            right[i] = right[i + 1] + 1;
        }
    }
    int ans = 0, lastInserted = -100;
    for (int i = 0; i < n; i++) {
        if (str[i] == '0' and left[i] > k and right[i] > k and i - lastInserted > k) {
            ans++;
            lastInserted = i;
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