#include <bits/stdc++.h>
using namespace std;

void test_case() {
    string str;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        for (int j = min((int)(i + 8), (int)(str.size() - 1)); j > i; j--) {
            int a = str[j] - '0', b = str[j - 1] - '0';
            if (a - 1 > b) {
                str[j] = str[j - 1];
                str[j - 1] = '0' + (a - 1);
            }
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