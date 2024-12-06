#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, first, second = -1;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr.begin(), arr.end());
    first = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] % first != 0 and second == -1) {
            second = arr[i];
        }
        if (arr[i] % first != 0 and arr[i] % second != 0) {
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