#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int a, b, ans = 0;
    cin >> a >> b;
    string str;
    cin >> str;
    int last = -1;
    if (str.size() == 0) {
        printf("0\n");
        return;
    }
    if (str[0] == '1') {
        ans += a;
        last = 0;
    }
    for (int i = 1; i < str.size(); i++) {
        if (str[i] == '1' and str[i - 1] == '1') {
            last = i;
        } else if (str[i] == '1' and str[i - 1] == '0' and last != -1) {
            ans += min(a, (i - last - 1) * b);
            last = i;
        } else if (str[i] == '1' and str[i - 1] == '0' and last == -1) {
            ans += a;
            last = i;
        };
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