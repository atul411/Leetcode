#include <bits/stdc++.h>
using namespace std;
#define Long long long
#define pll pair<Long, Long>

int main() {
    Long n, d;
    cin >> n >> d;
    vector<pll> arr(n);
    for (auto &x : arr) {
        cin >> x.first >> x.second;
    }
    sort(arr.begin(), arr.end());
    Long ans = arr[0].second, start = 0, end = 1, curr = arr[0].second;
    while (end < n) {
        curr += arr[end].second;
        while (arr[end].first - arr[start].first >= d) {
            curr -= arr[start].second;
            start++;
        }
        ans = max(ans, curr);
        end++;
    }
    cout << ans << "\n";
}