#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m, d;
    cin >> n >> m >> d;
    vector<int> arr(n * m);
    bool possible = true;
    int x = -1;
    for (auto &a : arr) {
        cin >> a;
        if (x == -1) {
            x = a % d;
        } else if (a % d != x) {
            possible = false;
        }
    }
    if (possible == false) {
        printf("-1");
        return;
    }
    sort(arr.begin(), arr.end());
    int median = arr[(n * m - 1) / 2];
    int ans = 0;
    for (int i = 0; i < n * m; i++) {
        ans += abs((arr[i] - median) / d);
    }
    cout << ans << "\n";
}

int main() {
    solve();
}