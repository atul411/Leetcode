#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int a, b, c;
    cin >> a >> b >> c;
    map<int, int> mp1, mp2;
    int i = 2;
    while (i * i <= a) {
        if (a % i) {
            mp1[i]++;
            a /= i;
        } else {
            i++;
        }
    }
    if (a > 1) {
        mp1[a]++;
    }
    i = 2;
    while (i * i <= b) {
        if (b % i == 0) {
            mp2[i]++;
            b /= i;
        } else {
            i++;
        }
    }
    if (a > 1) {
        mp1[a]++;
    }
    int ans = 0, mx = 0;
    for (auto i : mp1) {
        if (mp2[i.first] <= i.second) {
            mx = max(mx, i.second - mp2[i.first]);
        }
    }
    ans += mx;
    mx = 0;
    for (auto i : mp2) {
        if (mp1[i.first] <= i.second) {
            mx = max(mx, i.second - mp1[i.first]);
        }
    }
    ans += mx;
    if (ans > c) {
        printf("NO\n");
    } else {
        printf("YES\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}