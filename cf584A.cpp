#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, t;
    cin >> n >> t;
    if (t == 10 and n < 2) {
        printf("-1");
        return 0;
    }
    string str;
    if (t == 10) {
        str.push_back('1');
    } else {
        str.push_back('0' + t);
    }
    for (int i = 1; i < n; i++) {
        str.push_back('0');
    }
    cout << str;
}