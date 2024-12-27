#include <bits/stdc++.h>
using namespace std;

vector<int> shieve(int n) {
    vector<bool> arr(n + 1, true);
    arr[0] = arr[1] = false;
    for (int i = 2; i * i <= n; i++) {
        if (arr[i] == false) continue;
        for (int j = 2; j * i <= n; j++) {
            arr[i * j] = false;
        }
    }
    vector<int> ans;
    for (int i = 0; i <= n; i++) {
        if (arr[i] == true) {
            ans.push_back(i);
        }
    }
    return ans;
}

int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr = shieve(1e+7);
    vector<vector<int>> matrix(n, vector<int>(m));
    for (auto &arr1 : matrix)
        for (auto &x : arr1) cin >> x;

    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        int temp = 0;
        for (int j = 0; j < m; j++) {
            auto lowerBound = lower_bound(arr.begin(), arr.end(), matrix[i][j]);
            temp += (*lowerBound - matrix[i][j]);
        }
        ans = min(ans, temp);
    }

    for (int j = 0; j < m; j++) {
        int temp = 0;
        for (int i = 0; i < n; i++) {
            auto lowerBound = lower_bound(arr.begin(), arr.end(), matrix[i][j]);
            temp += (*lowerBound - matrix[i][j]);
        }
        ans = min(ans, temp);
    }
    cout << ans << "\n";
}