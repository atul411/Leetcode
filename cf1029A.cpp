#include <bits/stdc++.h>
using namespace std;

bool isequal(string &s, int i) {
    int temp = 0;
    for (int j = i; j < s.size(); j++) {
        if (s[j] != s[temp]) return false;
        temp++;
    }
    return true;
}

int main() {
    int n, k;
    cin >> n >> k;
    string str, additional = "";
    cin >> str;
    for (int i = 1; i < n; i++) {
        if (str[i] != str[0]) continue;
        bool a = isequal(str, i);
        if (a) {
            additional = str.substr(n - i);
            break;
        }
    }
    if (additional.empty()) {
        additional = str;
    }
    for (int i = 0; i < k - 1; i++) {
        str += additional;
    }
    cout << str << "\n";
}