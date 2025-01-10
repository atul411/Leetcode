#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &x : arr) cin >> x;
    int number = 0, freq = -1;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
        if (mp[arr[i]] > freq) {
            freq = mp[arr[i]];
            number = arr[i];
        }
    }
    int rest = 0;
    for (auto i : mp) {
        if (i.first != number) {
            rest += i.second;
        }
    }
    if (freq >= rest) {
        cout << freq - rest << "\n";
    } else {
        cout << (freq + rest) % 2 << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}