#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    string str;
    while (t--) {
        cin >> str;
        int ans = (str[0] - '0') + (str[1] - '0');
        cout << ans << "\n";
    }
}
int main() {
    int t;
    cin >> t;
    test_case(t);
}