#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    int len = n / k;
    string str;
    cin >> str;
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[str[i] - 'a']++;
    }

    vector<int> arr(k);
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < n / k; j++) {
            if (mp[min(25, i)] == 0) {
                arr[i] = min(25, i);
            } else {
                mp[min(25, i)]--;
            }
        }
    }
    for (auto i : arr) {
        cout << (char)i;
    }
    cout << "\n";
    // cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}