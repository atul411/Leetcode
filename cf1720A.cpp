#include <bits/stdc++.h>
using namespace std;

long long gcd(long long a, long long b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

void test_case() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a == 0 and c == 0) {
        cout << "0\n";
        return;
    } else if (a == 0 or c == 0) {
        cout << "1\n";
        return;
    }
    long long numerator = b * c, denominator = a * d;
    long long gc = gcd(numerator, denominator);
    numerator /= gc;
    denominator /= gc;
    if (numerator == denominator) {
        cout << "0\n";
    } else if (numerator != 1 and denominator != 1) {
        cout << "2\n";
    } else {
        cout << "1\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}