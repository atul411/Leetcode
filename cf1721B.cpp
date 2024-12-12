#include <bits/stdc++.h>
using namespace std;
#define vl vector<long long>
#define vvl vector<vl>

int a[] = {0, 1, 0, -1};
int b[] = {1, 0, -1, 0};

void solve(vvl &arr, int x, int y, int d, int currX, int currY) {
    for (int i = 0; i < 4; i++) {
        if (currX + a[i] >= 0 and currX + a[i] < arr.size() and currY + b[i] >= 0 and currY + b[i] <= arr[0].size() and abs(currX + a[i] - x) + abs(currY + b[i] - y) > d and arr[currX + a[i]][currY + b[i]] > arr[currX][currY] + 1) {
            arr[currX + a[i]][currY + b[i]] = arr[currX][currY] + 1;
            solve(arr, x, y, d, currX + a[i], currY + b[i]);
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, x, y, d;
        cin >> n >> m >> x >> y >> d;
        vvl arr(n, vl(m, INT_MAX));
        arr[0][0] = 0;
        if ((x - 1 + d >= n and x - 1 - d < 0) or (y - 1 + d >= m and y - 1 - d < 0)) {
            cout << "-1\n";
            return 0;
        }
        for (int i = 1; i < n; i++) {
            if (abs(i - x) + y - 1 > d) {
                arr[i][0] = arr[i - 1][0] + 1;
            } else {
                arr[i][0] = INT_MAX;
            }
        }
        for (int i = 1; i < m; i++) {
            if (abs(i - y) + x - 1 > d) {
                arr[0][i] = arr[0][i - 1] + 1;
            } else {
                arr[0][i] = INT_MAX;
            }
        }
        for (int i = 1; i < n; i++) {
            for (int j = 1; j < m; j++) {
                if (abs(i - x + 1) + abs(j - y + 1) > d) {
                    arr[i][j] = min(arr[i - 1][j], arr[i][j - 1]) + 1;
                } else {
                    arr[i][j] = INT_MAX;
                }
            }
        }
        if (arr[n - 1][m - 1] >= INT_MAX) {
            cout << "-1" << "\n";
        } else {
            cout << arr[n - 1][m - 1] << "\n";
        }
    }
}