#include <bits/stdc++.h>
using namespace std;

void test_case() {
    string a, b, smallest;
    int n;
    cin >> n;
    cin >> a >> b;
    smallest = a.substr(0, 1) + b.substr(0, n);
    for (int i = 1; i < n; i++) {
        if (i > 1 and a[i] == b[i - 1]) {
            continue;
        }
        string temp = a.substr(0, i + 1) + b.substr(i, n - i);
        if (temp < smallest) {
            smallest = temp;
        }
    }
    int ans = 0;
    for (int i = 0; i < n; i++) {
        string temp = a.substr(0, i + 1) + b.substr(i, n - i);
        if (temp == smallest) {
            ans++;
        }
    }
    cout << smallest << "\n"
         << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}