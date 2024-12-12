#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n + m);
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++) {
        if (i != m - 1) {
            cin >> arr1[n + i];
        } else {
            cin >> ans;
        }
    }
    sort(arr1.begin(), arr1.end());
    for (int i = 0; i < n - 1; i++) {
        ans += (arr1[n + m - 1 - i]);
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}