#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, mx = -1, ans = 0;
    cin >> n;
    vector<int> arr(n, 0);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        mx = max(arr[i], mx);
    }
    for (int i = 0; i < n; i++) {
        ans += mx - arr[i];
    }
    cout << ans;
}
