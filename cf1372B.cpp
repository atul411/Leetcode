#include <bits/stdc++.h>
using namespace std;

void test_case() {
    long long n, i = 1;
    cin >> n;
    while ((i + 1) * (i + 1) <= n) {
        if (n % (i + 1) == 0) {
            int first = n / (i + 1);
            int second = first * i;
            cout << first << " " << second << "\n";
            return;
        }
        i++;
    }
    cout << 1 << " " << n - 1 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}