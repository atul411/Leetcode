#include <bits/stdc++.h>
using namespace std;

char solve(char a, char b, char c) {
    if ('R' != a and 'R' != b and 'R' != c) {
        return 'R';
    }
    if ('G' != a and 'G' != b and 'G' != c) {
        return 'G';
    }
    if ('B' != a and 'B' != b and 'B' != c) {
        return 'B';
    }
    return 'R';
}
int main() {
    int n, ans = 0;
    cin >> n;
    string str;
    cin >> str;
    if (n == 1) {
        cout << str;
        return 0;
    }
    if (str[0] == 'B' and str[1] == 'B') {
        str[0] = 'R';
        ans++;
    } else if (str[0] == 'R' and str[1] == 'R') {
        str[0] = 'B';
        ans++;
    } else if (str[0] == 'G' and str[1] == 'G') {
        str[0] = 'B';
        ans++;
    }
    for (int i = 2; i < n; i++) {
        if (str[i] == str[i - 1] or str[i] == str[i - 2]) {
            ans++;
            str[i] = solve(str[i], str[i - 1], str[i - 2]);
        }
    }
    cout << ans << "\n"
         << str;
}