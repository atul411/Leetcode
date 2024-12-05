#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vvi = vector<vi>;

void test_case(int t) {
    int n;
    vvi arr;
    while (t--) {
        cin >> n;
        arr = vvi(n, vi(n, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cin >> arr[i][j];
            }
        }
        int ans = 0, mn;
        for (int i = 0; i < n; i++) {
            int row = i, col = 0;
            mn = 0;
            while (row < n and col < n) {
                mn = min(mn, arr[row++][col++]);
            }
            ans += abs(mn);
        }
        for (int j = 1; j < n; j++) {
            int row = 0, col = j;
            mn = 0;
            while (row < n and col < n) {
                mn = min(mn, arr[row++][col++]);
            }
            ans += abs(mn);
        }
        cout << ans << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}