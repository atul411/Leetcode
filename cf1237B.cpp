#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> enter(n), exit(n);
    vector<bool> mp(n + 1, false);

    for (int i = 0; i < n; i++) {
        cin >> enter[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> exit[i];
    }

    int ans = 0, first = 0, second = 0;
    while (first < n and second < n) {
        if (enter[first] == exit[second]) {
            mp[exit[second]] = true;
            second++;
            first++;
        } else if (mp[enter[first]]) {
            first++;
        } else {
            mp[exit[second]] = true;
            second++;
            ans++;
        }
    }
    cout << ans << "\n";
}

int main() {
    test_case();
}