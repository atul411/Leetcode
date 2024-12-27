#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, m;
    cin >> n >> m;
    if (n == 1 or m == 1) {
        printf("YES\n");
        return;
    }
    if (n <= m) {
        printf("NO\n");
        return;
    }
    int i = 2;
    while (i * i <= n and i <= m) {
        if (n % i == 0) {
            printf("NO\n");
            return;
        }
        i++;
    }
    printf("YES\n");
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        test_case();
    }
}
