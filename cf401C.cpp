#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    string str;
    while (n > 0 or m > 0) {
        if (n > m) {
            if (str.empty() or str.back() != '0') {
                str.push_back('0');
                n--;
            } else {
                str.push_back('1');
                m--;
            }
        } else if (m > n) {
            if (str.size() < 2 or str.back() != '1') {
                str.push_back('1');
                m--;
            } else if (str[str.size() - 2] != '1') {
                str.push_back('1');
                m--;
            } else {
                str.push_back('0');
                n--;
            }
        } else {
            if (str.back() != '0') {
                str.push_back('0');
                n--;
            } else {
                str.push_back('1');
                m--;
            }
        }
        if (n < 0 or m < 0) {
            printf("-1");
            return;
        }
        int size = str.size();
        if (size >= 2 and str[size - 1] == '0' and str[size - 2] == '0') {
            printf("-1");
            return;
        }
        if (size >= 3 and str[size - 1] == '1' and str[size - 2] == '1' and str[size - 3] == '1') {
            printf("-1");
            return;
        }
    }
    cout << str << "\n";
}

int main() {
    solve();
}