#include <bits/stdc++.h>
using namespace std;

void test_case() {
    string str;
    cin >> str;
    int p;
    cin >> p;
    vector<int> mp(26, 0);
    int total = 0;
    for (int i = 0; i < str.size(); i++) {
        mp[str[i] - 'a']++;
        total += (str[i] - 'a' + 1);
    }
    int curr = 25;
    while (total > p) {
        if (mp[curr]) {
            mp[curr]--;
            total -= (curr + 1);
        } else {
            curr--;
        }
    }
    string ans;
    for (int i = 0; i < str.size(); i++) {
        if (mp[str[i] - 'a']) {
            ans.push_back(str[i]);
            mp[str[i]-'a']--;
        }
    }
    cout << ans << "\n";
}
int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}