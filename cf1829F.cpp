#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, m, u, v;
    cin >> n >> m;
    unordered_map<int, int> mp;
    for (int i = 0; i < m; i++) {
        cin >> u >> v;
        mp[u]++;
        mp[v]++;
    }
    int yCount = 0;
    for (auto i : mp) {
        if (i.second == 1) {
            yCount++;
        }
    }
    
    int upper = (m / 3) + 1;
    for (int i = 2; i <= 100; i++) {
        for (int j = 2; j <= 100; j++) {
            if (i * (j + 1) == m) {
                cout << i << " " << j << "\n";
                return;
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}