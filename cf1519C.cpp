#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> arr1(n + 1), arr2(n + 1);
    vector<vector<int>> universities(n + 1);
    for (int i = 1; i <= n; i++) {
        cin >> arr1[i];
    }
    for (int i = 1; i <= n; i++) {
        cin >> arr2[i];
    }
    for (int i = 1; i <= n; i++) {
        universities[arr1[i]].push_back(arr2[i]);
    }
    for (int i = 1; i <= n; i++) {
        sort(universities[i].rbegin(), universities[i].rend());
    }
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= universities[i].size(); j++) {
            universities[i][j] += universities[i][j - 1];
        }
    }
    vector<int> ans(n + 1);
    for (int i = 1; i <= n; i++) {
        for (int j = 0 + i - 1; j < n; j += i) {
            
        }
    }
}

int main() {
    solve();
}