#include <bits/stdc++.h>
using namespace std;

void test_case() {
    string str;
    cin >> str;
    if (str.size() == 1) {
        printf("1");
        return;
    }
    int start = 0, end = 1, ans = 1;
    if (str[0] == '?') {
        if (str[1] == '1') {
            str[0] = '0';
        } else {
            str[0] = '1';
        }
    }
    while (end < str.size()) {
        if (str[end] == '?') {
            if (str[end - 1] == '1') {
                str[end] = '0';
            } else {
                str[end] = '1';
            }
        }
        if (str[end] != str[end - 1]) {
            ans += (end - start + 1);
        } else {
            start = end;
            ans++;
        }
        end++;
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}