#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k, a, b;
    cin >> n >> k;
    vector<pair<int, int>> arr;
    for (int i = 0; i < n; i++) {
        cin >> a >> b;
        arr.push_back({a, b});
    }
    int all[50 + 1];
    fill_n(all, 51, 0);
    for (int i = 1; i < 51; i++) {
        for (auto j : arr) {
            if (i >= j.first and i <= j.second) {
                all[i]++;
            }
        }
    }
    int commonForK = all[k];
    for (int i = 1; i < 51; i++) {
        if (i == k) continue;
        for (int j = 0; j < n; j++) {
            if ((i >= arr[j].first and i <= arr[j].second) and
                (arr[j].first > k or arr[j].second < k)) {
                all[i]--;
            }
        }
        if (all[i] >= all[k]) {
            cout << "NO\n";
            return;
        }
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