#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    if (n < 4) {
        printf("-1\n");
        return;
    } else if (n == 4) {
        printf("3 1 4 2\n");
        return;
    }
    for (int i = 1; i <= n; i += 2) {
        cout << i << " ";
    }
    for (int i = 2; i <= n; i += 2) {
        cout << i << " ";
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}