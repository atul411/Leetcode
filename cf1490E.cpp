#include <bits/stdc++.h>
using namespace std;
#define pll pair<int64_t, int64_t>

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &a : arr) cin >> a;
    map<int64_t, int64_t> mp;
    for (auto i : arr) {
        mp[i]++;
    }
    int64_t sum = 0;
    priority_queue<pll> pq;
    for (auto i : mp) {
        sum += (i.first * i.second);
        pq.push({i.first, i.second});
    }
    set<int64_t> st;
    int64_t last = 0;
    while (pq.size()) {
        auto top = pq.top();
        pq.pop();
        if (sum >= last) {
            st.insert(top.first);
            sum -= top.first * top.second;
            last = top.first;
        } else {
            break;
        }   
    }
    vector<int64_t> ans;
    for (int i = 1; i <= n; i++) {
        if (st.count(arr[i - 1])) {
            ans.push_back(i);
        }
    }
    cout << ans.size() << "\n";
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