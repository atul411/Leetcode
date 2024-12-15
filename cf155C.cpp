#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int m;
    cin >> m;
    int arr[2][m];
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    long long alice = INT_MAX, bob = INT_MAX;
    for (int i = 1; i < m; i++) {
        arr[0][i] += arr[0][i - 1];
    }
    for (int i = m - 2; i >= 0; i--) {
        arr[1][i] += arr[1][i + 1];
    }
    for (int i = 0; i < m; i++) {
        int a = (arr[0][i] + arr[1][i]);
        int b = max(arr[0][m - 1] - arr[0][i], arr[1][0] - arr[1][i]);
        bob = min(bob, (long long)b);
    }
    cout << bob << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}