#include <bits/stdc++.h>
using namespace std;

int main() {
    long long n;
    cin >> n;
    long long fact = 1;
    for (long long i = 1; i <= n; i++) {
        fact *= i;
    }
    cout << 2 * fact / (n * n);
}
