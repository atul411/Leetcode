#include <bits/stdc++.h>
using namespace std;
#define int long long

vector<int> arr;
int n, x, y;

void test_case() {
    cin >> n >> x >> y;
    arr.resize(n);
    for (auto &x : arr) cin >> x;
    int sm = accumulate(arr.begin(), arr.end(), 0LL);
    if (sm % 2 == 0) {
        if (x % 2 == y % 2) {
            printf("Alice\n");
        } else {
            printf("Bob\n");
        }
    } else {
        if (x % 2 == y % 2) {
            printf("Bob\n");
        } else {
            printf("Alice\n");
        }
    }
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}