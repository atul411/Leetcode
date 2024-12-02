#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int n;
    while (t--) {
        cin >> n;
        int wrongOdd = 0, wrongEven = 0, temp;
        for (int i = 0; i < n; i++) {
            cin >> temp;
            if (i % 2 == 0 and temp % 2 != 0) {
                wrongEven++;
            } else if (i % 2 != 0 and temp % 2 == 0) {
                wrongOdd++;
            }
        }
        if (wrongEven == wrongOdd) {
            cout << wrongEven << "\n";
        } else {
            cout << "-1\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}