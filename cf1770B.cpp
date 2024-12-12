#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    int start = n, end = 1;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            cout << start-- << " ";
        } else {
            cout << end++ << " ";
        }
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