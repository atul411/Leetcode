#include <bits/stdc++.h>
using namespace std;

int main() {
    string str, ans;
    cin >> str;
    int i = 0;
    while (i < str.size()) {
        if (str[i] == '-' and i + 1 < str.size() and str[i + 1] == '-') {
            ans.push_back('2');
            i += 2;
        } else if (str[i] == '-' and i + 1 < str.size() and str[i + 1] == '.') {
            ans.push_back('1');
            i += 2;
        } else {
            ans.push_back('0');
            i++;
        }
    }
    cout << ans;
}