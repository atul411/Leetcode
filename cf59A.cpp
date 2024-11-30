#include<bits/stdc++.h>
using namespace std;

string upper_case(string str) {
    for (auto &ch : str) {
        ch = toupper(ch);
    }
    return str;
}

string lower_case(string str) {
    for (auto &ch : str) {
        ch = tolower(ch);
    }
    return str;
}

int main() {
    string str = "atul";
    cin >> str;
    int lower = 0, upper = 0;
    for (auto ch : str) {
        if (islower(ch)) {
            lower++;
        } else {
            upper++;
        }
    }
    if (upper > lower) {
        str = upper_case(str);
    } else {
        str = lower_case(str);
    }
    cout << str;
}