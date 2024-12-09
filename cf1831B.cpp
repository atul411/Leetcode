#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    vector<int> mp1(2 * n + 1), mp2(2 * n + 1);
    int curr = 1;
    for (int i = 1; i < n; i++) {
        if (arr1[i] == arr1[i - 1]) {
            curr++;
        } else {
            mp1[arr1[i - 1]] = max(curr, mp1[arr1[i - 1]]);
            curr = 1;
        }
    }
    mp1[arr1[n - 1]] = max(curr, mp1[arr1[n - 1]]);
    curr = 1;
    for (int i = 1; i < n; i++) {
        if (arr2[i] == arr2[i - 1]) {
            curr++;
        } else {
            mp2[arr2[i - 1]] = max(curr, mp2[arr2[i - 1]]);
            curr = 1;
        }
    }
    mp2[arr2[n - 1]] = max(curr, mp2[arr2[n - 1]]);
    int ans = 0;
    for (int i = 0; i < n; i++) {
        ans = max(mp1[arr1[i]] + mp2[arr1[i]], ans);
        ans = max(mp1[arr2[i]] + mp2[arr2[i]], ans);
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