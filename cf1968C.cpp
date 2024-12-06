#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, mx = -1;
    cin >> n;
    vector<int> arr(n - 1);
    vector<int> ans(n);
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
        mx = max(mx, arr[i]);
    }
    ans[0] = mx + 5;
    for (int i = 1; i < n; i++) {
        ans[i] = ans[i - 1] + arr[i - 1];
    }
    for (auto i : ans) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}