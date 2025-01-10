#include <bits/stdc++.h>
using namespace std;


void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<int> index(n + 1);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        index[arr[i]] = i;
    }
    int curr = 0;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--) {
        int idx = index[i + 1];
        for (int j = 0; j < ans.size(); j++) {
            idx = (idx - ans[j] + n - j) % (n - j);
        }
        if (idx == i) {
            ans.push_back(0);
        } else {
            ans.push_back(idx + 1);
        }
    }
    reverse(ans.begin(), ans.end());
    for (auto i : ans) {
        cout << i << " ";
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