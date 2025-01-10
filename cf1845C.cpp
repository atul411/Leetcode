#include <bits/stdc++.h>
using namespace std;

string str, lower, upper;
int n, m;

bool checkSubSequence(string passowrd, int i, int j) {
    if (i < 0) return true;
    if (j < 0) return false;
    if (passowrd[i] == str[i]) {
        return checkSubSequence(passowrd, i - 1, j - 1);
    }
    return checkSubSequence(passowrd, i, j - 1);
}

bool abc(string password, int i, int m) {
    if (i == m) {
        return checkSubSequence(password, m - 1, str.size() - 1);
    }
    int l = (lower[i] - '0'), r = (upper[i] - '0');
    cout << password << " " << "\n";
    for (int k = l; k <= r; k++) {
        password.push_back(k + '0');
        bool check = abc(password, i + 1, m);
        if (!check) {
            return false;
        }
        password.pop_back();
    }
    return true;
}

void test_case() {
    cin >> str;
    cin >> m;
    cin >> lower >> upper;
    bool a = abc("", 0, m);
    cout << (a ? "YES" : "NO") << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}