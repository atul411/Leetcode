#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void test_case() {
    int n;
    cin >> n;   
    vi arr(n);
    for (auto &x : arr) cin >> x;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] * 2 > arr[i + 1] and 2 * arr[i + 1] > arr[i]) {
            printf("YES\n");
            return;
        }
    }
    printf("NO\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}