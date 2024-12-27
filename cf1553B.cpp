#include <bits/stdc++.h>
using namespace std;

bool solve(string &s, string &t, int index1, int index2, bool forward) {
    if (index2 == t.size() - 1) return true;
    bool a = false, b = false;
    if (index1 + 1 < s.size() and s[index1 + 1] == t[index2 + 1] and forward) {
        a = solve(s, t, index1 + 1, index2 + 1, forward);
    }
    if (index1 - 1 >= 0 and s[index1 - 1] == t[index2 + 1]) {
        b = solve(s, t, index1 - 1, index2 + 1, false);
    }
    return a or b;
}
void test_case() {
    string s, t;
    vector<int> arr;
    cin >> s >> t;
    for (int i = 0; i < s.size(); i++) {
        if (t[0] == s[i]) {
            arr.push_back(i);
        }
    }

    for (int i = 0; i < arr.size(); i++) {
        bool ans = solve(s, t, arr[i], 0, true);
        if (ans) {
            printf("YES\n");
            return;
        }
    }
    printf("NO\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}