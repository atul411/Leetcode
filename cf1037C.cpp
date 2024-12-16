#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    string a, b;
    cin >> a >> b;
    int ans = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] != b[i] and i == n - 1) {
            ans++;
        } else if (a[i] != b[i] and a[i + 1] == b[i + 1]) {
            ans++;
        } else if (a[i] != b[i] and a[i] != a[i + 1]) {
            ans++;
            swap(a[i], a[i + 1]);
        } else if (a[i] != b[i]) {
            ans++;
        }
    }
    cout << ans << "\n";
}