#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    string str, temp;
    cin >> str;
    temp.push_back(str[0]);
    for (int i = 1; i < n; i++) {
        if (str[i] == '1' or temp.back() != '0') {
            temp.push_back(str[i]);
        }
    }
    int one = 0, zero = 0;
    for (int i = 0; i < temp.size(); i++) {
        if (temp[i] == '1') {
            one++;
        } else {
            zero++;
        }
    }
    if (one > zero) {
        cout << "Yes\n";
    } else {
        cout << "No\n";
    }
}

int main() {
    int t = 3;
    cin >> t;
    while (t--) {
        test_case();
    }
}