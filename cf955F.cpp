#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, number = 1, count = 0;
    cin >> n;
    vector<int> arr(n);
    map<int, int> mp;
    for (auto &a : arr) cin >> a;
    for (int i = 0; i < n; i++) {
        int x = arr[i];
        if (mp.count(x - 1)) {
            mp[x] = mp[x - 1] + 1;
        } else {
            mp[x] = 1;
        }
        if (mp[x] > count) {
            count++;
            number = x;
        }
    }
    vector<int> ans;
    cout << count << "\n";
    for (int i = n - 1; i >= 0; i--) {
        if (count == 0) break;
        if (arr[i] == number) {
            number--;
            count--;
            ans.push_back(i+1);
        }
    }
    reverse(ans.begin(), ans.end());
    for (auto i : ans) {
        cout << i << " ";
    }
}

int main() {
    solve();
}