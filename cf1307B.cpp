#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, x;
    cin >> n >> x;
    int mx = 0, temp;
    set<int> st;

    for (int i = 0; i < n; i++) {
        cin >> temp;
        mx = max(mx, temp);
        st.insert(temp);
    }
    if (st.count(x)) {
        printf("1\n");
        return;
    }
    cout << max(2, (x + mx - 1) / mx) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}