#include <bits/stdc++.h>
using namespace std;

void test_case() {
    string str;
    long long count = 0, ans = 0;
    cin >> str;
    for (int i = 0; i < str.size(); i++) {
        if (str[i] == '1') {
            count++;
        } else if (count > 0) {
            ans += (count + 1);
        }
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