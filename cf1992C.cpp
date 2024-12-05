#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, m, k;
    cin >> n >> m >> k;
    int arr[n], index = 0;
    for (int i = n; i > m; i--) {
        arr[index++] = i;
    }
    for (int i = 1; i <= m; i++) {
        arr[index++] = i;
    }
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}