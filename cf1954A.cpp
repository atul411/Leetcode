#include <bits/stdc++.h>
using namespace std;

int test = 1;
void test_case() {
    int n, m, k;
    cin >> n >> m >> k;
    int a = (n / m) * (m - 1) + n % m;
    test++;
    if (a > k) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}