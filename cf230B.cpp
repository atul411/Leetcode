#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 4) return true;

    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) return false;
        i++;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        long long temp;
        cin >> temp;
        long long x = sqrt(temp);
        if (x == 1) {
            printf("NO\n");
            continue;
        }
        if (x * x != temp) {
            printf("NO\n");
        } else if (isPrime(x)) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}