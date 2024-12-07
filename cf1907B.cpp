#include <bits/stdc++.h>
using namespace std;

void test_case() {
    string str, ans;
    cin >> str;
    int n = str.size(), bcount = 0, Bcount = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (str[i] == 'b') {
            bcount++;
        } else if (str[i] == 'B') {
            Bcount++;
        } else if (islower(str[i]) and bcount) {
            bcount--;
        } else if (isupper(str[i]) and Bcount) {
            Bcount--;
        } else {
            ans.push_back(str[i]);
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans << "\n";
}
int main() {
    int t;

    cin >> t;
    while (t--) {
        test_case();
    }
}