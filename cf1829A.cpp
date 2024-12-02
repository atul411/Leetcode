#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, ans;
    cin >> t;
    string temp, codeforces = "codeforces";
    while (t--) {
        ans = 0;
        cin >> temp;
        for (int i = 0; i < 10; i++) {
            if (temp[i] != codeforces[i]) {
                ans++;
            }
        }
        cout << ans << "\n";
    }
}