#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> arr1(n), arr2(m);
    for (auto &a : arr1) cin >> a;
    for (auto &a : arr2) cin >> a;
    map<int, int> mp1, mp2;
    for (auto i : arr2) {
        mp1[i]++;
    }
    int start = 0, end = 0;
    int counter = 0, ans = 0;
    while (end < n) {
        if (mp1[arr1[end]] > 0) {
            counter++;
            mp1[arr1[end]]--;
        } else if (mp1.count(arr1[end])) {
            mp2[arr1[end]]++;
        }
        if (end - start + 1 == m) {
            if (counter >= k) {
                ans++;
            }
            if (mp2[arr1[start]] > 0) {
                mp2[arr1[start]]--;
            } else if (mp1.count(arr1[start])) {
                mp1[arr1[start]]++;
                counter--;
            }
            start++;
        }
        end++;
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