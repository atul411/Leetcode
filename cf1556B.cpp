#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, x, ans = INT_MAX;
    cin >> n;
    int evenCount = 0, oddCount = 0;
    int evenAteven = 0, oddAtodd = 0;
    for (int i = 0; i < n; i++) {
        cin >> x;
        if (x % 2 == 0) {
            evenCount++;
            if (i % 2 == 0) evenAteven++;
        } else {
            oddCount++;
            if (i % 2 != 0) oddAtodd++;
        }
    }
    if (abs(evenCount - oddCount) > 1) {
        printf("-1\n");
        return;
    }
    ans = min(ans, evenCount - evenAteven + oddCount - oddAtodd);
    ans = min(ans, evenCount + oddCount);
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}