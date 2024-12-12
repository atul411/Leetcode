#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    if (n % 2 != 0) {
        for (int i = 0; i < n; i++) {
            printf("1 ");
        }
        printf("\n");
    } else {
        printf("1 3 ");
        for (int i = 0; i < n - 2; i++) {
            printf("2 ");
        }
        printf("\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}