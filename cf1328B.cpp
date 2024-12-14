#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    int x = sqrt(2 * k);
    if (x * (x + 1) > 2 * k) {
        x--;
    }
    int temp = k - x * (x - 1) / 2;
    string str;
    for (int i = 0; i < k; i++) {
        if (k - x == i or k - temp == i) {
            str.push_back('b');
        } else {
            str.push_back('a');
        }
    }
    cout << str << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}