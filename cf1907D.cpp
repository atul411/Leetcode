#include <bits/stdc++.h>
using namespace std;
#define int long long
#define pii pair<int, int>

bool check(vector<pii> arr, int mid) {
    int ll = 0, rr = 0;
    for (int i = 0; i < arr.size(); i++) {
        ll = max(arr[i].first, ll - mid);
        rr = min(arr[i].second, rr + mid);
        if (rr < ll) return false;
    }
    return true;
}

void test_case() {
    int n;
    cin >> n;
    vector<pii> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }

    int low = 0, high = 1e12, ans = 0;
    while (low <= high) {
        int mid = (low + high) / 2;
        if (check(arr, mid)) {
            ans = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << ans << "\n";
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}