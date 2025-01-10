#include <bits/stdc++.h>
using namespace std;

void test_case() {
    double number;
    cin >> number;
    double disciminant = pow(number, 2) - 4 * number;
    if (disciminant < 0) {
        printf("N\n");
        return;
    }
    double x1 = (number + sqrt(disciminant)) / 2.0;
    double x2 = (number - sqrt(disciminant)) / 2.0;
    if (x1 < 0 or x2 < 0) {
        printf("N\n");
        return;
    }
    printf("Y %0.9lf %0.9lf\n", x1, x2);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}