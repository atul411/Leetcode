#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 2; i++) {
        if (arr[i + 1] < 2 * arr[i] or arr[i + 2] < arr[i]) {
            printf("NO\n");
            return;
        }
        arr[i + 1] -= 2 * arr[i];
        arr[i + 2] -= arr[i];
        arr[i] = 0;
    }
    if (arr[n - 1] != 0 or arr[n - 2] != 0) {
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