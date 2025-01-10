#include <bits/stdc++.h>
using namespace std;

bool check(string &s) {
    int openCount = 0, closeCount = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '(') {
            openCount++;
        } else if (openCount <= 0) {
            return false;
        } else {
            openCount--;
        }
    }
    return openCount == 0;
}

void test_case() {
    int n;
    string str;
    cin >> n >> str;
    int openCount = 0, closeCount = 0;
    for (int i = 0; i < n; i++) {
        if (str[i] == '(')
            openCount++;
        else
            closeCount++;
    }
    if (openCount != closeCount) {
        printf("-1\n");
        return;
    }
    string reverse;
    for (int i = 0; i < n; i++) {
        if (str[i] == '(') {
            reverse.push_back(')');
        } else {
            reverse.push_back('(');
        }
    }
    if (check(reverse) or check(str)) {
        printf("1\n");
        for (int i = 0; i < n; i++) {
            printf("1 ");
        }
        cout << "\n";
        return;
    }
    vector<int> ans(n, -1);
    stack<pair<char, int>> st;
    int x = 1;
    for (int i = 0; i < n; i++) {
        if (str[i] == '(') {
            st.push({'(', i});
        } else if (!st.empty()) {
            ans[i] = 1;
            x = 2;
            ans[st.top().second] = 1;
            st.pop();
        }
    }
    for (int i = 0; i < n; i++) {
        if (ans[i] == -1) {
            ans[i] = x;
        }
    }
    printf("%d\n", *max_element(ans.begin(), ans.end()));
    for (auto i : ans) {
        printf("%d ", i);
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}