#include <bits/stdc++.h>
using namespace std;

void solve(int t) {
    int n, m, k, ans;
    string str;
    while (t--) {
        ans = 0;
        cin >> n >> m >> k;
        cin >> str;
        int count = 0, start = 0;
        while (start < str.size()) {
            if (str[start] == '1') {
                count = 0;
            } else {
                count++;
            }
            if (count == m) {
                count = 0;
                ans++;
                start += k;
            } else {
                start++;
            }
        }
        cout << ans << endl;
    }
}

int main() {
    int t;
    cin >> t;
    solve(t);
}