#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    if (n == 1) {
        cout << "1\n";
        return;
    }
    if (n % 2 == 0) {
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");

    } else {
        printf("-1\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}