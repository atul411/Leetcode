#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, last = INT_MAX, first;
    char ch;
    cin >> n >> ch;
    string str;
    cin >> str;
    if (ch == 'g') {
        cout << "0\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        if (str[i] == 'g') {
            first = i;
            break;
        }
    }
    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (str[i] == ch) {
            int temp = min(last - i, n - i + first);
            ans = max(ans, temp);
        }
        if (str[i] == 'g') {
            last = i;
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