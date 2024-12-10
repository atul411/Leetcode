#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, distinct = 0;
    cin >> n;
    string str;
    cin >> str;
    int left[n], right[n];
    fill_n(left, n, 0);
    fill_n(right, n, 0);
    vector<int> mp(26, 0);
    for (int i = 0; i < n; i++) {
        if (mp[str[i] - 'a'] == 0) {
            mp[str[i] - 'a'] = 1;
            distinct++;
        }
        left[i] = distinct;
    }
    fill_n(&mp[0], 26, 0);
    distinct = 0;
    for (int i = n - 1; i >= 0; i--) {
        right[i] = distinct;
        if (mp[str[i] - 'a'] == 0) {
            distinct++;
            mp[str[i] - 'a'] = 1;
        }
    }
    int ans = -1;
    for (int i = 0; i < n; i++) {
        ans = max(left[i] + right[i], ans);
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