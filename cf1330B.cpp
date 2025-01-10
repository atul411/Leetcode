#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    int arr[n];
    for (auto &a : arr) {
        cin >> a;
    }
    vector<bool> left(n, false);
    vector<bool> right(n, false);
    int mx = INT_MIN;
    bool becameBad = false;
    set<int> st;
    for (int i = 0; i < n; i++) {
        mx = max(mx, arr[i]);
        if (st.count(arr[i])) {
            becameBad = true;
        }
        if (becameBad) {
            break;
        }
        st.insert(arr[i]);
        if (mx == st.size()) {
            left[i] = true;
        }
    }
    st.clear();
    becameBad = false;
    mx = INT_MIN;
    for (int i = n - 1; i >= 0; i--) {
        mx = max(mx, arr[i]);
        if (st.count(arr[i])) becameBad = true;
        if (becameBad) break;
        st.insert(arr[i]);
        if (mx == n - i) {
            right[i] = true;
        }
    }
    vector<pair<int, int>> ans;
    for (int i = 0; i + 1 < n; i++) {
        if (left[i] and right[i + 1]) {
            ans.push_back({i + 1, n - i - 1});
        }
    }
    cout << ans.size() << "\n";
    for (auto i : ans) {
        cout << i.first << " " << i.second << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}