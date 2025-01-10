#include <bits/stdc++.h>
using namespace std;
#define int long long

void test_case() {
    int n;
    cin >> n;
    vector<int> first(n), second(n);
    for (auto &a : first) {
        cin >> a;
    }

    for (auto &a : second) {
        cin >> a;
    }
    vector<int> nextGreaterIndex(n, -1);
    stack<int> st;
    st.push(n - 1);
    for (int i = n - 1; i >= 0; i--) {
        if (first[i] < second[i]) {
            nextGreaterIndex[i] = i;
            st.push(i);
        } else {
            stack<int> st2;
            while (st.size() and second[st.top()] < first[i]) {
                st2.push(st.top());
                st.pop();
            }
            if (st.empty()) {
                nextGreaterIndex[i] = INT_MAX;
            } else {
                nextGreaterIndex[i] = st.top();
                while (st2.size() and second[st2.top()] > second[i]) {
                    st.push(st2.top());
                    st2.pop();
                }
                st.push(i);
            }
        }
    }
    // for (auto u : nextGreaterIndex) {
    //     cout << u << " ";
    // }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        ans = min(ans, i + nextGreaterIndex[i]);
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