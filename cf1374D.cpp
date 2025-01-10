#include <bits/stdc++.h>
using namespace std;
#define ll long long

void test_case() {
    ll n, k, temp, count = 0;
    cin >> n >> k;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp % k != 0) {
            arr.push_back(k - (temp % k));
            count++;
        }
    }
    ll start = 0, end = 0, ans = 0, x = 0;
    vector<bool> handle(arr.size(), false);
    while (count > 0) {
        if (x < arr[end]) {
            ans += arr[end] - x;
            x = arr[end];
        } else if (x == arr[end]) {
            handle[end] = true;
            x++;
            ans++;
            count--;
            while (handle[end]) {
                end++;
            }
        }
        while (handle[start] == true) {
            start++;
        }
        if (end >= handle.size()) {
            end = start;
            ans += k - x;
        }
        x %= k;
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