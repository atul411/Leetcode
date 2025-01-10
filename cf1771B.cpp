#include <bits/stdc++.h>
using namespace std;
#define int long long

void test_case() {
    int n, m;
    cin >> n >> m;
    vector<vector<int>> arr(n + 1, vector<int>());

    for (int i = 0; i < m; i++) {
        int x, y;
        cin >> x >> y;
        if (x < y) {
            arr[x].push_back(y);
        } else {
            arr[y].push_back(x);
        }
    }
    multiset<int> st;
    int start = 1, end = 1, ans = 0;
    while (end <= n) {
        while (st.count(end)) {
            for (auto i : arr[start]) {
                auto itr = st.find(i);
                st.erase(itr);
            }
            start++;
        }
        for (auto i : arr[end]) {
            st.insert(i);
        }
        ans += (end - start) + 1;
        end++;
    }
    cout << ans << "\n";
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}