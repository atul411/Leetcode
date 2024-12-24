#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int a, b;
    cin >> a >> b;
    if (a > b) {
        swap(a, b);
    }
    if ((a + b) % 3 == 0 and a * 2 >= b) {
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