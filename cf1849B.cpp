#include <bits/stdc++.h>
using namespace std;

bool comprator(pair<int, int> a, pair<int, int> b) {
    if (a.first != b.first) {
        return a.first > b.first;
    }
    return a.second < b.second;
}
void test_case() {
    int n, k, temp;
    cin >> n >> k;
    vector<pair<int, int>> ans(n);
    for (int i = 0; i < n; i++) {
        cin >> ans[i].first;
        if (ans[i].first % k == 0) {
            ans[i].first = k;
        } else {
            ans[i].first %= k;
        }
        ans[i].second = i;
    }
    sort(ans.begin(), ans.end(), comprator);
    for (auto i : ans) {
        cout << i.second + 1 << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}