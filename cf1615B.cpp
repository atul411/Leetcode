#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int first, second, zeroCount, maxElement;
    cin >> first >> second;
    vector<int> mp(31, INT_MAX);
    for (int i = 0; i < 20; i++) {
        if ((1 << i) > second) continue;
        zeroCount = 0;
        for (int j = first; j <= second; j++) {
            if ((j & (1 << i)) == 0 and (1 << i) <= second) {
                zeroCount++;
            }
        }
        mp[i] = zeroCount;
    }
    int ans = INT_MAX;
    for (auto i : mp) {
        ans = min(ans, i);
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