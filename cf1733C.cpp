#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &a : arr) {
        cin >> a;
    }
    if (arr.size() == 1) {
        printf("0\n");
        return;
    }
    vector<vector<int>> ans;
    if (arr[0] != arr[n - 1]) {
        ans.push_back({0, n - 1});
        if ((arr[0] + arr[n - 1]) % 2 == 0) {
            arr[0] = arr[n - 1];
        } else {
            arr[n - 1] = arr[0];
        }
    }
    for (int i = 1; i < n - 1; i++) {
        if ((arr[i] + arr[0]) % 2 == 0) {
            ans.push_back({i, n - 1});
        } else {
            ans.push_back({0, i});
        }
    }
    cout << ans.size() << "\n";
    for (auto a : ans) {
        cout << a[0] + 1 << " " << a[1] + 1 << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}