#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    int mx = -1, index;
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
        if (arr2[i] > mx) {
            mx = arr2[i];
            index = i;
        }
    }
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        ans += arr1[i];
        if (index != i) {
            ans += arr2[i];
        }
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