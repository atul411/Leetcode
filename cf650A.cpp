#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    vector<vector<int>> freq(n + 1, vector<int>());
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        freq[arr[i]].push_back(i);
    }
    vector<int> ans(n);
    vector<int> tocColor;
    for (int i = 1; i <= n; i++) {
        int color = 1;
        if (freq[i].size() >= k) {
            for (int j = 0; j < k; j++) {
                ans[freq[i][j]] = color++;
            }
        } else {
            for (int j = 0; j < freq[i].size(); j++) {
                tocColor.push_back(freq[i][j]);
            }
        }
    }
    for (int i = 0; i + k - 1 < tocColor.size(); i += k) {
        int curr = i, color = 1;
        for (int j = 0; j < k; j++) {
            ans[tocColor[i + j]] = color++;
        }
    }
    for (auto i : ans) {
        cout << i << " ";
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}