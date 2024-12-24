#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(m);
    string str;
    cin >> str;
    for (int i = 0; i < m; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    vector<int> ans(26, 0);
    for (auto i : str) {
        ans[i - 'a']++;
    }
    for (int i = 0; i < n; i++) {
        auto lower = lower_bound(arr.begin(), arr.end(), i + 1) - arr.begin();
        if (lower < m) {
            ans[str[i] - 'a'] += m - lower;
        }
    }
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