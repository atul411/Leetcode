#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    string str;
    int ans = 0;
    while (t--) {
        ans = 0;
        cin >> str;
        ans += 10 * (str[0] - '1');
        ans += str.size() * (str.size() + 1) / 2;
        cout << ans << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}