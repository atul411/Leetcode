#include <bits/stdc++.h>
using namespace std;

void test_case() {
    long long n;
    cin >> n;
    map<long long, long long> mp;
    long long i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            mp[i]++;
            n /= i;
        } else {
            i++;
        }
    }
    if (n != 1) {
        mp[n]++;
    }
    long long ans = 1;
    for (auto i : mp) {
        ans *= i.first;
    }
    cout << ans;
}

int main() {
    test_case();
}