#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int cnt = 0;
    str.push_back('1');
    for (int i = 1; i < n; i++) {
        if (str[i] != str[i - 1]) continue;
        cnt++;
        for (auto ch : {'G', 'R', 'B'}) {
            if (ch != str[i + 1] and ch != str[i - 1]) {
                str[i] = ch;
                break;
            }
        }
    }
    str.pop_back();
    cout << cnt << "\n";
    cout << str << "\n";
}

int main() {
    solve();
}