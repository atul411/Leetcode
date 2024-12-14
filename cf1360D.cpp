#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    if (k >= n) {
        printf("1\n");
        return;
    }
    int ans = 1, i = 2;
    while (i * i <= n and i <= k) {
        if (n % i == 0 and n / i <= k) {
            ans = n / i;
            break;
        } else if (n % i == 0) {
            ans = i;
        }
        i++;
    }
    cout << n / ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}