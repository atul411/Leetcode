#include <bits/stdc++.h>
using namespace std;
#define Long long long

void solve() {
    long long n, k;
    cin >> n >> k;
    map<Long, Long> mp;
    Long temp = n;
    Long i = 2;
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
    Long count = 1;
    for (auto i : mp) {
        count *= (i.second + 1);
    }
    if (count < k) {
        printf("-1");
    }
    Long first = 1;
    n = temp;
    i = 1;
    while (i * i <= n) {
        if (n % i == 0) {
            if (first == k) {
                cout << i << "\n";
                return;
            } else if (count - first + 1 == k) {
                cout << n / i << "\n";
                return;
            }
            first++;
        }
        i++;
    }
}

int main() {
    solve();
}