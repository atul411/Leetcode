#include <bits/stdc++.h>
using namespace std;

bool isLucky(int n) {
    if (n == 0) {
        return false;
    }
    while (n) {
        int digit = n % 10;
        if (!(digit == 7 or digit == 4)) {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main() {
    int n;
    int i = 1;
    cin >> n;
    while (i * i <= n) {
        if (n % i == 0 and (isLucky(i) or isLucky(n / i))) {
            cout << "YES";
            return 0;
        }
        i++;
    }
    cout << "NO";
}