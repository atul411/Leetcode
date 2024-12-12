#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    arr[0][0] = 1;
    for (int i = 0; i < n; i += 2) {
        if (arr[i][0] == 0 and i + 1 < n) {
            arr[i + 1][0] = 1;
        }
        if (arr[i][0] == 0 and i + 2 < n) {
            arr[i + 2][0] = 1;
        }
        if (arr[i][0] == 1 and i + 1 < n) {
            arr[i + 1][0] = 0;
        }
        if (arr[i][0] == 1 and i + 2 < n) {
            arr[i + 2][0] = 0;
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j += 2) {
            if (arr[i][j] == 0 and j + 1 < m) {
                arr[i][j + 1] = 1;
            }
            if (arr[i][j] == 0 and j + 2 < m) {
                arr[i][j + 2] = 1;
            }

            if (arr[i][j] == 1 and j + 1 < m) {
                arr[i][j + 1] = 0;
            }
            if (arr[i][j] == 1 and j + 2 < m) {
                arr[i][j + 2] = 0;
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cout << arr[i][j] << " ";
        }
        printf("\n");
    }
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}