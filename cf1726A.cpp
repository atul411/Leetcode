#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    int arr[n];
    for (auto &input : arr) {
        cin >> input;
    }
    if (n == 1) {
        printf("0\n");
        return;
    }
    int mx = -1, mn = INT_MAX;
    int continues = -1;
    for (int i = 1; i < n; i++) {
        continues = max(continues, arr[i - 1] - arr[i]);
        mx = max(arr[i], mx);
        mn = min(mn, arr[n - 1 - i]);
    }

    cout << max({mx - arr[0], arr[n - 1] - mn, continues}) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}