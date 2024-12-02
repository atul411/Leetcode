#include <bits/stdc++.h>
using namespace std;

bool is_prime(int n) {
    if (n < 4) {
        return true;
    }
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return false;
        }
        i++;
    }
    return true;
}

void solve(int n, int m) {
    if (!is_prime(m)) {
        printf("NO");
        return;
    }
    int nextPrime = n + 1;
    while (!is_prime(nextPrime)) {
        nextPrime++;
    }
    if (nextPrime == m) {
        printf("YES");
    } else {
        printf("NO");
    }
}

int main() {
    int n, m;
    cin >> n >> m;
    solve(n, m);
}