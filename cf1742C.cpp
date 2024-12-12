#include <bits/stdc++.h>
using namespace std;

void test_case() {
    char ch;
    int vertical[8], horizontal[8];
    fill_n(vertical, 8, 0);
    fill_n(horizontal, 8, 0);
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j < 8; j++) {
            cin >> ch;
            if (ch == 'B') {
                vertical[j]++;
            } else if (ch == 'R') {
                horizontal[i]++;
            }
        }
    }
    for (int i = 0; i < 8; i++) {
        if (vertical[i] == 8) {
            cout << "B\n";
            return;
        } else if (horizontal[i] == 8) {
            cout << "R\n";
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}