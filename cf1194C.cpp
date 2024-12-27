#include <bits/stdc++.h>
using namespace std;

bool isSubSequence(string &s, string &t, int i, int j) {
    if (i < 0) return true;
    if (j < 0) return false;

    if (s[i] == t[j]) {
        return isSubSequence(s, t, i - 1, j - 1);
    }
    return isSubSequence(s, t, i, j - 1);
}

void test_case() {
    string s, t, p;
    cin >> s >> t >> p;
    if (s.length() + p.length() < t.length() or s.length() > t.length()) {
        printf("NO\n");
        return;
    }
    bool a = isSubSequence(s, t, s.length() - 1, t.length() - 1);
    if (a == false) {
        printf("NO\n");
        return;
    }
    vector<int> arr(26);
    for (int i = 0; i < t.size(); i++) {
        arr[t[i] - 'a']++;
    }

    for (int i = 0; i < s.size(); i++) {
        arr[s[i] - 'a']--;
    }
    for (int i = 0; i < p.size(); i++) {
        arr[p[i] - 'a']--;
    }
    for (int i = 0; i < 26; i++) {
        if (arr[i] > 0) {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}