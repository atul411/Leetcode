#include <bits/stdc++.h>
using namespace std;

// map<pair<int, int>, bool> mp;

bool check(string &a, string &b) {
    int start = 0, end = a.size() - 1;
    while (end >= 0) {
        if (a[start] != b[end]) {
            return false;
        }
        end--;
        start++;
    }
    return true;
}
int main() {
    string str, ans;
    cin >> str;
    int n = str.size();
    int start = 0, end = n - 1;
    string prefix, suffix;
    while (start < str.size() - 1) {
        prefix.push_back(str[start]);
        suffix.push_back(str[end]);
        if (prefix[0] == suffix.back() and check(prefix, suffix)) {
            int index = str.find(prefix, 1);
            if (index != -1 and index + start < str.size() - 1) {
                ans = prefix;
            }
        }
        start++;
        end--;
    }
    if (ans.empty()) {
        printf("Just a legend");
    } else {
        cout << ans << "\n";
    }
}