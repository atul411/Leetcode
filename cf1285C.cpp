#include <bits/stdc++.h>
using namespace std;
#define Long long long

Long gcd(Long a, Long b) {
    if (b % a == 0) {
        return a;
    }
    return gcd(b % a, a);
}

int main() {
    Long n;
    cin >> n;
    Long i = 1, a = 1, b = n;
    while (i * i <= n) {
        if (n % i == 0 && gcd(i, n / i) == 1) {
            if (max(a, b) > max(i, n / i)) {
                a = i;
                b = n / i;
            }
        }
        i++;
    }
    cout << a << " " << b;
}