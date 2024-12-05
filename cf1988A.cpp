#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k, ans = 0;
    cin >> n >> k;
    if (n == 1) {
        printf("0\n");
        return;
    }
    while (n - k + 1 > 1) {
        ans++;
        n = n - k + 1;
    }
    ans++;
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}