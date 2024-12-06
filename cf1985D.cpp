#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, m;
    cin >> n >> m;
    char ch;
    int x1 = n, x2 = 0, y1 = m, y2 = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            cin >> ch;
            if (ch == '#') {
                if (i + 1 > x2) {
                    x2 = i + 1;
                }
                if (i + 1 < x1) {
                    x1 = i + 1;
                }
                if (j + 1 > y2) {
                    y2 = j + 1;
                }
                if (j + 1 < y1) {
                    y1 = j + 1;
                }
            }
        }
    }
    cout << (x1 + x2) / 2 << " " << (y1 + y2) / 2 << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}