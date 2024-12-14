#include <bits/stdc++.h>
using namespace std;

bool caps_lock(string str) {
    if (str.size() == 1) return true;
    for (int i = 1; i < str.size(); i++) {
        if (isupper(str[0]) and islower(str[i])) {
            return false;
        }
        if (islower(str[0]) and islower(str[i])) {
            return false;
        }
    }
    return true;
}

int main() {
    string str;
    cin >> str;
    if (caps_lock(str)) {
        for (int i = 0; i < str.size(); i++) {
            if (isupper(str[i])) {
                str[i] = tolower(str[i]);
            } else {
                str[i] = toupper(str[i]);
            }
        }
    }
    cout << str;
}