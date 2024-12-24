#include <bits/stdc++.h>
using namespace std;
vector<int> vect;

bool isGoodNumber(int n) {
    for (int i = 9; i >= 0; i--) {
        if (n >= pow(3, i)) {
            n -= pow(3, i);
        }
    }
    if (n == 0) {
        return true;
    }
    return false;
}



void test_case() {
    int q;
    cin >> q;
    int i = lower_bound(vect.begin(), vect.end(), q) - vect.begin();
    cout << vect[i] << "\n";
}

int main() {
    int t;
    cin >> t;
    for (int i = 1; i <= pow(3, 9); i++) {
        if (isGoodNumber(i)) {
            vect.push_back(i);
        }
    }
    while (t--) {
        test_case();
    }
}