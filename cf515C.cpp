#include <bits/stdc++.h>
using namespace std;
#define Long long long

void solve() {
    int n;
    string str;
    cin >> n >> str;
    vector<vector<Long>> graph(10, vector<Long>());
    graph[2] = {2};
    graph[3] = {3};
    graph[4] = {3, 2, 2};
    graph[5] = {5};
    graph[6] = {5, 3};
    graph[7] = {7};
    graph[8] = {7, 2, 2, 2};
    graph[9] = {7, 3, 3, 2};
    vector<int> mp(10);
    for (int i = 0; i < n; i++) {
        int number = str[i] - '0';
        if (number < 2) continue;
        for (auto j : graph[number]) {
            mp[j]++;
        }
    }
    string ans;
    for (int i = 9; i >= 2; i--) {
        for (int j = 0; j < mp[i]; j++) {
            ans.push_back(i + '0');
        }
    }
    cout << ans << "\n";
}

int main() {
    solve();
}