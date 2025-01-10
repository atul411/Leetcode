#include <bits/stdc++.h>
using namespace std;
#define int long long

void test_case() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (auto &a : arr) cin >> a;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        int a = arr[i], pos = 0;
        while (a) {
            if (a % k == 0) {
                a /= k;
            } else if (a % k != 1) {
                printf("NO\n");
                return;
            } else {
                a /= k;
                mp[pos]++;
            }
            pos++;
        }
    }
    for (auto i : mp) {
        if (i.second > 1) {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}