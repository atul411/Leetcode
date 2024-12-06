#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, m;
    cin >> n >> m;
    int ans = 0, currLen = 0;
    string str;
    bool take = true;
    for (int i = 0; i < n; i++) {
        cin >> str;
        if (currLen + str.size() <= m and take == true) {
            currLen += str.size();
            ans++;
        } else {
            take = false;
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