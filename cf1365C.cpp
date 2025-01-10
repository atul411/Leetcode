#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, temp;
    cin >> n;
    vector<int> arr1(n), arr2(n + 1), arr3(n);
    for (auto &x : arr1) {
        cin >> x;
    }
    for (int i = 0; i < n; i++) {
        cin >> temp;
        arr2[temp] = i;
    }
    for (int i = 0; i < n; i++) {
        int x = arr1[i];
        if (arr2[x] >= i) {
            arr3[arr2[x] - i]++;
        } else {
            arr3[arr2[x] + n - i]++;
        }
    }
    int ans = 0;
    for (auto i : arr3) {
        ans = max(ans, i);
    }
    cout << ans << "\n";
}