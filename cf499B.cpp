#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;
    map<string, string> mp;
    string first, second;
    for (int i = 0; i < m; i++) {
        cin >> first >> second;
        mp[first] = second;
    }
    string ans, temp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        string a = mp[temp];
        if (a.size() < temp.size()) {
            ans += a + " ";
        } else {
            ans += temp + " ";
        }
    }
    cout << ans;
}

int main() {
    solve();
}