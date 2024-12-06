#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, m, k, temp;
    cin >> n >> m >> k;
    map<int, int> a, b;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        a[temp]++;
    }
    for (int i = 0; i < m; i++) {
        cin >> temp;
        b[temp]++;
    }
    int fromFirst = 0, fromSecond = 0;
    for (int i = 1; i <= k; i++) {
        if (a[i] == 0 and b[i] == 0) {
            cout << "NO\n";
            return;
        } else if (a[i] != 0 and b[i] != 0) {
            continue;
        }
        if (a[i] != 0) {
            fromFirst++;
        } else {
            fromSecond++;
        }
    }
    if (fromFirst > k / 2 or fromSecond > k / 2) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}