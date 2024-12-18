#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, temp;
    cin >> n;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        mp[temp]++;
    }
    for (int i = 0; i <= 2e+5; i++) {
        if (mp[i] <= i) {
            cout << i << "\n";
            return;
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}