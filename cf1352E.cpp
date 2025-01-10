#include <bits/stdc++.h>
using namespace std;
#define Long long long

void test_case() {
    map<Long, Long> mp;
    mp[0] = -1;

    Long sum = 0;
    int n;
    cin >> n;
    vector<Long> arr(n), cnt(n + 1);
    for (auto &x : arr) {
        cin >> x;
        cnt[x]++;
    }
    Long ans = 0;
    for (int l = 0; l < n; l++) {
        Long sum = 0;
        for (int r = l; r < n; r++) {
            sum += arr[r];
            if (l == r) continue;
            if (sum <= n) {
                ans += cnt[sum];
                cnt[sum] = 0;
            } else {
                break;
            }
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