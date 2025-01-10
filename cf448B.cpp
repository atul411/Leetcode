#include <bits/stdc++.h>
using namespace std;

bool checkSubsequence(string s, string t, int a, int b) {
    if (b < 0) return true;
    if (a < 0) return false;
    if (s[a] == t[b]) {
        return checkSubsequence(s, t, a - 1, b - 1);
    }
    return checkSubsequence(s, t, a - 1, b);
}

int main() {
    string s, t;
    cin >> s >> t;
    bool isSubSequence = checkSubsequence(s, t, s.size() - 1, t.size() - 1);
    vector<int> arr(26, 0);
    bool possibleBySwap = true;
    for (auto ch : s) {
        arr[ch - 'a']++;
    }
    for (auto ch : t) {
        arr[ch - 'a']--;
        if (arr[ch - 'a'] < 0) {
            possibleBySwap = false;
        }
    }

    if (isSubSequence) {
        printf("automaton");
    } else if (possibleBySwap and s.size() != t.size()) {
        printf("both");
    } else if (possibleBySwap) {
        printf("array");
    } else {
        printf("need tree");
    }
}