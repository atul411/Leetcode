#include <bits/stdc++.h>
using namespace std;

int is_ap(vector<int> &arr) {
    int diff = arr[1] - arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] - arr[i - 1] != diff) return -1;
    }
    return diff;
}
void test_case() {
    int n, temp;
    cin >> n;
    map<int, vector<int>> mp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        mp[temp].push_back(i);
    }
    vector<pair<int, int>> ans;
    for (auto i : mp) {
        if (i.second.size() == 1) {
            ans.push_back({i.first, 0});
            continue;
        }
        int diff = is_ap(i.second);
        if (diff != -1) {
            ans.push_back({i.first, diff});
        }
    }
    cout << ans.size() << "\n";
    for (auto i : ans) {
        cout << i.first << " " << i.second << "\n";
    }
}

int main() {
    test_case();
}