#include <bits/stdc++.h>
using namespace std;

string ans;
string s;
int solve(int i) {
    if (i < 0) {
        return 0;
    }
    if (i == 0) {
        return 1;
    }
    if (s[i] != s[i - 1]) {
        ans.push_back(s[i]);
        ans.push_back(s[i - 1]);
        return solve(i - 2);
    }
    return 1 + solve(i - 1);
}

int main() {
    int n;
    cin >> n;
    cin >> s;
    if (s.size() == 1) {
        printf("1");
        return 0;
    }
    int len = solve(n - 1);
    reverse(ans.begin(), ans.end());
    cout << len << "\n";
    cout << ans << "\n";
}