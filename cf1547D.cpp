#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    stack<int> st;
    int i = n;
    while (i >= 1) {
        if (arr[i - 1] % (i + 1) == 0) {
            st.push(arr[i - 1]);
            i--;
            continue;
        }
        while (!st.empty() and st.top() % (i + 1) != 0) {
            st.pop();
        }
        i--;
    }
    if (st.empty()) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}