#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, curr = 0, currFreq;
    char currChar = 'a';
    map<char, int> mp;
    cin >> n;
    string ans;
    for (int i = 0; i < n; i++) {
        cin >> currFreq;
        if (currFreq == 0) {
            mp[currChar + curr]++;
            ans.push_back(currChar + curr);
            curr++;
            continue;
        }
        char ch;
        for (auto c : mp) {
            if (c.second == currFreq) {
                ch = c.first;
                break;
            }
        }
        ans.push_back(ch);
        mp[ch]++;
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