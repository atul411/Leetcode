#include <bits/stdc++.h>
using namespace std;
#define Long long long
#define pll pair<Long, Long>

int main() {
    Long n;
    cin >> n;
    vector<pll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i].first >> arr[i].second;
    }
    Long ans = 1, curr = arr[0].first;
    for (int i = 1; i < n; i++) {
        if (arr[i].first - arr[i].second > curr) {
            ans++;
            curr = arr[i].first;
        } else if (i == n - 1 or arr[i].first + arr[i].second < arr[i + 1].first) {
            ans++;
            curr = arr[i].first + arr[i].second;
        } else {
            curr = arr[i].first;
        }
    }
    cout << ans << "\n";
}