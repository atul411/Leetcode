#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<long long> arr(n);
    long long sum = 0;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sum += arr[i];
    }
    sort(arr.begin(), arr.end());
    long long m;
    cin >> m;
    for (int i = 0; i < m; i++) {
        long long first, second;
        cin >> first >> second;
        int index = lower_bound(arr.begin(), arr.end(), first) - arr.begin();
        if (index == n) {
            long long ans = first - arr[n - 1];
            sum -= arr[n - 1];
            if (second > sum) {
                ans += second - sum;
            }
            sum += arr[n - 1];
            cout << ans << "\n";
        } else if (arr[index] == first) {
            long long ans = 0;
            sum -= arr[index];
            if (second > sum) {
                ans += second - sum;
            }
            sum += arr[index];
            cout << ans << "\n";
        } else {
            long long ans1 = 0;
            sum -= arr[index];
            if (sum < second) {
                ans1 += second - sum;
            }
            sum += arr[index];
            long long ans2 = LLONG_MAX;
            if (index > 0) {
                ans2 = first - arr[index - 1];
                sum -= arr[index - 1];
                if (sum < second) {
                    ans2 += second - sum;
                }
                sum += arr[index - 1];
            }
            cout << min(ans1, ans2) << "\n";
        }
    }
}