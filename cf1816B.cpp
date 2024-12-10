#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin>>n;
    int arr[2][n];
    int curr = 1;
    for (int i = 1; i < n; i += 2) {
        arr[0][i] = curr++;
    }
    for (int i = 0; i < n; i += 2) {
        arr[1][i] = curr++;
    }
    for (int i = 0; i < n; i += 2) {
        arr[0][i] = curr++;
    }
    for (int i = 1; i < n; i += 2) {
        arr[1][i] = curr++;
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}