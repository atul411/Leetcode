#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, temp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
    }
    if (n % 2 == 0) {
        printf("2\n");
        cout << "1 " << n << "\n";
        cout << "1 " << n << "\n";
    } else {
        printf("4\n");
        cout << "1 " << n - 1 << "\n";
        cout << "1 " << n - 1 << "\n";
        cout << n - 1 << " " << n << "\n";
        cout << n - 1 << " " << n << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}