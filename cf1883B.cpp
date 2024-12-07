#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k, evenFreq = 0, oddFreq = 0;
    cin >> n >> k;
    int arr[26];
    fill_n(arr, 26, 0);
    string str;
    cin >> str;
    for (auto ch : str) {
        arr[ch - 'a']++;
    }
    for (auto i : arr) {
        if (i % 2 == 0) {
            evenFreq++;
        } else {
            oddFreq++;
        }
    }
    if (oddFreq > k + 1) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}