#include <bits/stdc++.h>
using namespace std;

const double pi = 3.14159265358979323846264338327950288;

void test_case() {
    double n;
    cin >> n;
    double r = 1.000000 / tan(pi / (2 * n));
    printf("%0.9lf\n", r);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}