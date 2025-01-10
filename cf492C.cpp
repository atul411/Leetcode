#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>

bool check(vector<pii> &arr, int mid, int avg, int r) {
    int sum = 0;
    for (int i = 0; i < arr.size(); i++) {
        sum += arr[i].first;
        if (arr[i].first < r) {
            int leverage = (r - arr[i].first);
            int needed = leverage * arr[i].second;
            if (needed <= mid) {
                sum += leverage;
                mid -= needed;
            } else if (mid >= 0) {
                sum += mid / arr[i].second;
                mid -= (mid / arr[i].second) * arr[i].second;
            }
        }
    }
    return sum >= avg * arr.size();
}

int32_t main() {
    int n, r, avg;
    cin >> n >> r >> avg;
    vector<pii> arr(n);
    for (auto &a : arr) {
        cin >> a.first >> a.second;
    }
    sort(arr.begin(), arr.end(), [](pii a, pii b) {
        return a.second < b.second;
    });
    int low = 0, high = LLONG_MAX, ans;
    while (low <= high) {
        int mid = (low + high) / 2;
        int qualified = check(arr, mid, avg, r);
        if (qualified) {
            high = mid - 1;
            ans = mid;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << "\n";
}
