#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

int main() {
    int n;
    cin >> n;
    vector<pii> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    sort(arr.begin(), arr.end());
    int ans = min(arr[0].first, arr[0].second);
    for (int i = 1; i < n; i++) {
        if (min(arr[i].first, arr[i].second) >= ans) {
            ans = min(arr[i].first, arr[i].second);
        } else {
            ans = max(arr[i].first, arr[i].second);
        }
    }
    cout << ans << "\n";
}