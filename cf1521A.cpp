#include <bits/stdc++.h>
using namespace std;

void test_case() {
    long long a, b;
    cin >> a >> b;
    if (b == 1) {
        printf("NO\n");
    } else {
        printf("YES\n");
        cout << a << " " << a * b << " " << a * b + a << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}