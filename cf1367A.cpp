#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    string str, ans;
    while (t--) {
        ans = string();
        cin >> str;
        for (int i = 0; i < str.size(); i += 2) {
            ans.push_back(str[i]);
        }
        ans.push_back(str.back());
        cout << ans << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}