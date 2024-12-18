#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    long long ans = 0, last = -1;
    char ch;
    for (int i = 0; i < n; i++) {
        cin >> ch;
        if (ch == '1' and last == -1) {
            last = i;
            ans = 1;
        } else if (ch == '1') {
            ans *= (long long)(i - last);
            last = i;
        }
    }
    cout << ans << "\n";
}