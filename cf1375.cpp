#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr1(n);
    for (auto &x : arr1) cin >> x;
    stack<int> st;
    for (int i = 0; i < n; i++) {
        if (st.empty() or st.top() > arr1[i]) {
            st.push(arr1[i]);
            continue;
        }
        int temp = INT_MAX;
        while (st.size() && st.top() < arr1[i]) {
            temp = st.top();
            st.pop();
        }
        st.push(temp);
    }
    if (st.size() == 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}