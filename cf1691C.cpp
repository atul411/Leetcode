#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    if (str.size() == 2) {
        int x = stoi(str);
        if (x == 11) {
            printf("11\n");
        } else if (k > 0) {
            printf("1\n");
        } else {
            cout << x << "\n";
        }
        return;
    }
    if (str[n - 2] == '1' and str[n - 1] == '0' and k > 0) {
        swap(str[n - 2], str[n - 1]);
        k--;
    }
    if (str[0] == '0' and str[1] == '1' and k > 0) {
        swap(str[0], str[1]);
    }
    int ans = 0;
    for (int i = 0; i + 1 < n; i++) {
        if (str[i] == '0') {
            ans += (str[i + 1] - '0');
        } else {
            ans += (str[i + 1] - '0');
            ans += 10;
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