#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

void test_case() {
    string str;
    cin >> str;
    int n = str.size(), zero = 0, one = 0;
    vector<pii> arr1(n), arr2(n);
    for (int i = 0; i < n; i++) {
        arr1[i].first = zero;
        arr1[i].second = one;
        if (str[i] == '0') {
            zero++;
        } else {
            one++;
        }
    }
    zero = 0, one = 0;
    for (int i = n - 1; i >= 0; i--) {
        arr2[i].first = zero;
        arr2[i].second = one;
        if (str[i] == '0') {
            zero++;
        } else {
            one++;
        }
    }
    int ans = INT_MAX;
    for (int i = 1; i < n - 1; i++) {
        ans = min(ans, arr1[i].first + arr2[i].second);
        ans = min(ans, arr1[i].second + arr2[i].first);
    }
    ans = min({ans, arr2[0].first, arr2[0].second, arr1[n - 1].first, arr1[n - 1].second});
    cout << ans << "\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}