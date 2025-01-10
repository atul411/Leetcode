#include <bits/stdc++.h>
using namespace std;

vector<int64_t> arr;
map<int64_t, int> mp;

bool solve(int64_t num, vector<int64_t> &ans) {
    if (ans.size() == arr.size()) {
        return true;
    }
    if (num % 3 == 0 and (ans.size() == arr.size() - 1 or mp.count(num / 3))) {
        ans.push_back(num);
        mp[num]--;
        if (solve(num / 3, ans) == false) {
            mp[num]++;
            ans.pop_back();
        } else {
            return true;
        }
    }
    if (ans.size() == arr.size() - 1 or mp.count(2 * num)) {
        ans.push_back(num);
        mp[num]--;
        if (solve(num * 2, ans) == false) {
            mp[num]++;
            ans.pop_back();
        } else {
            return true;
        }
    }
    return false;
}

void solve() {
    int n;
    cin >> n;
    arr.resize(n);
    for (auto &a : arr) {
        cin >> a;
        mp[a]++;
    }
    vector<int64_t> ans;
    for (int i = 0; i < n; i++) {
        if (solve(arr[i], ans)) {
            break;
        }
    }
    for (auto i : ans) {
        cout << i << " ";
    }
}

int main() {
    solve();
}