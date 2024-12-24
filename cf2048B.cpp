#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    if (k == 1 or k == n) {
        for (int i = 1; i <= n; i++) {
            printf("%d ", i);
        }
        printf("\n");
        return;
    }
    vector<int> arr(n, -1);
    int start = 1;
    for (int i = k - 1; i < n; i += k) {
        arr[i] = start++;
    }
    for (int i = 0; i < n; i++) {
        if (arr[i] == -1) {
            arr[i] = start++;
        }
    }
    for (auto i : arr) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}