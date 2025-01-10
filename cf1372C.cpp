#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr[i];
    }
    int ans = 0, curr = 0;
    for (int i = 1; i <= n; i++) {
        if (arr[i] != i) {
            curr++;
        } else if (curr) {
            ans++;
            curr = 0;
        }
    }
    if (curr) {
        ans++;
    }
    if (ans <= 1) {
        cout << ans << "\n";
    } else {
        cout << "2\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}