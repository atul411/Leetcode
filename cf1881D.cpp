#include <bits/stdc++.h>
using namespace std;
#define ll long long

map<int, int> mp;

void solve(int n) {
    int i = 2;
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
}
void test_case() {
    mp.clear();
    ll n, mul = 1, temp;
    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        solve(temp);
    }
    for (auto i : mp) {
        if (i.second % n != 0) {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}