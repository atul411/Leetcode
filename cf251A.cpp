#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n, d, ans = 0;
    cin >> n >> d;
    vector<long long> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n < 3) {
        printf("0\n");
        return 0;
    }
    for (int i = 0; i < n - 2; i++) {
        auto second = lower_bound(arr.begin() + i, arr.end(), arr[i] + d) - arr.begin();
        if (second == n or arr[second] != arr[i] + d and second - i > 1) {
            ans += (second - i - 1) * (second - i - 2) / 2;
        } else if (arr[second] == arr[i] + d) {
            ans += (second - i) * (second - i - 1) / 2;
        }
    }
    cout << ans << "\n";
}