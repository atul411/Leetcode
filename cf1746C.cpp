#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    vector<pair<int, int>> ans(n);
    ans[0] = {0, 1};
    int mx = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] > mx) {
            ans[i] = {0, i + 1};
            mx = arr[i];
        } else {
            ans[i] = {mx - arr[i] + 1, i + 1};
        }
    }
    sort(ans.begin(), ans.end());
    for (auto i : ans) {
        printf("%d ", i.second);
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}