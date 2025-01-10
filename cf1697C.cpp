#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    string s, t;
    cin >> s >> t;
    int j = 0, bcount = 0, cCount = 0, aCount = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == 'b') {
            bcount++;
        } else if (s[i] == 'c') {
            cCount++;
        } else {
            aCount++;
        }
    }
    for (int i = 0; i < n; i++) {
        if (t[i] == 'b') {
            bcount--;
        } else if (t[i] == 'c') {
            cCount--;
        } else {
            aCount--;
        }
    }
    if (aCount != 0 or bcount != 0 or cCount != 0) {
        cout << "NO\n";
        return;
    }
    for (int i = 0; i < n; i++) {
        if (s[i] == 'b') continue;
        while (t[j] == 'b') {
            j++;
            continue;
        }
        if (s[i] != t[j] or (s[i] == 'a' and j < i) or (s[i] == 'c' and i < j)) {
            // cout<<i<<" "<<j<<"\n";
            cout << "NO\n";
            return;
        }
        j++;
    }
    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}