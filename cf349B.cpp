#include <bits/stdc++.h>
using namespace std;

vector<int> arr(10);

bool check(int n, int j) {
    int mx = -1;
    for (int i = 1; i <= 9; i++) {
        mx = max(mx, n / arr[i]);
    }
    return mx >= j;
}
void solve() {
    int n;
    cin >> n;
    int mx = 0;
    for (int i = 1; i <= 9; i++) {
        cin >> arr[i];
        mx = max(mx, n / arr[i]);
    }
    if (mx == 0) {
        printf("-1");
        return;
    }
    for (int i = mx; i >= 1; i--) {
        for (int j = 9; j >= 1; j--) {
            if (n - arr[j] < 0) continue;
            bool possible = check(n - arr[j], i - 1);
            if (possible) {
                cout << j;
                n -= arr[j];
                break;
            }
        }
    }
}

int main() {
    solve();
}