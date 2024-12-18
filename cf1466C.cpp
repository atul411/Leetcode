#include <bits/stdc++.h>
using namespace std;

void test_case() {
    string str;
    cin >> str;
    int ans = 0;
    int changed[str.size() + 1];
    fill_n(changed, str.size() + 1, false);
    for (int i = 1; i < str.size(); i++) {
        if (str[i] == str[i - 1] and changed[i - 1] == false) {
            ans++;
            changed[i] = true;
        } else if (i - 2 >= 0 and changed[i - 2] == false and str[i] == str[i - 2]) {
            changed[i] = true;
            ans++;
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