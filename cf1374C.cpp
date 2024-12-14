#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, extraClosing = 0;
    int closing = 0;
    cin >> n;
    string str;
    cin >> str;
    for (int i = 0; i < n; i++) {
        if (str[i] == '(') {
            closing++;
        } else if (str[i] == ')' and closing > 0) {
            closing--;
        } else {
            extraClosing++;
        }
    }
    cout << extraClosing << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}