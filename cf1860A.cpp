#include <bits/stdc++.h>
using namespace std;

void test_case() {
    string str;
    cin >> str;
    int n = str.size();
    if (str.size() == 2 and str == "()") {
        cout << "NO\n";
        return;
    }
    cout<<"YES\n";
    bool consecutiveequal = false;
    for (int i = 1; i < n; i++) {
        if (str[i] == str[i - 1]) {
            consecutiveequal = true;
            break;
        }
    }
    if (consecutiveequal) {
        for (int i = 0; i < n; i++) {
            cout << "()";
        }
        cout << "\n";
        return;
    }
    for (int i = 0; i < 2 * n; i++) {
        if (i < n) {
            cout << "(";
        } else {
            cout << ")";
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