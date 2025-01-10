#include <bits/stdc++.h>
using namespace std;

int64_t mostSignificantBit(int64_t n) {
    int ans = 0;
    while (n) {
        ans++;
        n = n >> 1;
    }
    return ans - 1;
}

void solve() {
    int64_t l, r;
    cin >> l >> r;
    if (l == r) {
        printf("0");
        return;
    }
    int64_t lastSetbit = mostSignificantBit(r), first = r;
    int64_t second = (1LL << (lastSetbit)) - 1LL;
    for (int i = lastSetbit - 1; i >= 0; i--) {
        if (first & (1LL << i)) {
            if ((first ^ (1LL << i)) >= l) {
                first = first ^ (1LL << i);
            } else if (((1LL << i) ^ second) >= l) {
                second ^= (1LL << i);
            }
        }
    }
    cout << (first ^ second) << "\n";
}

int main() {
    solve();
}