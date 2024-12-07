#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, i = 0;
    string str, ans;
    cin >> n;
    cin >> str;
    set<char> v = {'a', 'e'}, c = {'b', 'c', 'd'};
    if (str.size() <= 3) {
        cout << str << "\n";
        return;
    }
    while (i < n) {
        if (n - i <= 3) {
            ans += (ans.size() != 0) ? "." + str.substr(i, n - i) : str.substr(i, n - i);
            i = n;
        } else if (c.count(str[i + 2]) and c.count(str[i + 3])) {
            ans += (ans.size() != 0) ? "." + str.substr(i, 3) : str.substr(i, 3);
            i += 3;
        } else if (c.count(str[i + 2])) {
            ans += (ans.size() != 0) ? "." + str.substr(i, 2) : str.substr(i, 2);
            i += 2;
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