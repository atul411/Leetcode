#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
using namespace std;
using namespace __gnu_pbds;

#define Long long long

int main() {
    Long n, x, y;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    for (int i = 0; i < n; i++) {
        arr1[i] -= arr2[i];
    }
    sort(arr1.begin(), arr1.end());
    Long ans = 0;
    multiset<int> st;
    for (int i = 0; i < n; i++) {
        if (arr1[i] <= 0) continue;
        auto temp = lower_bound(arr1.begin(), arr1.end(), -arr1[i]);
        ans += arr1.end() - temp;
    }
    cout << ans << "\n";
}