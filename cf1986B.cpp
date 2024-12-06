#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, m;
    cin >> n >> m;
    int arr[n][m];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> arr[i][j];
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            int mx = max({
                (i - 1 >= 0 ? arr[i - 1][j] : 0),
                (i + 1 < n ? arr[i + 1][j] : 0),
                (j - 1 >= 0 ? arr[i][j - 1] : 0),
                (j + 1 < m ? arr[i][j + 1] : 0),
            });
            if (mx != 0) {
                arr[i][j] = min(arr[i][j], mx);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
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