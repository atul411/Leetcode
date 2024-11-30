#include<bits/stdc++.h>
using namespace std;

void solution(string str) {
    int n = str.size();
    if (str.size() <= 1) {
        cout << -1 << "\n";
        return;
    }
    for (int i = 0; i + 1 < n; i++) {
        if (str[i] == str[i + 1]) {
            cout << str.substr(i, 2) << "\n";
            return;
        }
    }
    for (int i = 0; i + 2 < n; i++) {
        if (str[i] != str[i + 1] and str[i + 1] != str[i + 2] and str[i] != str[i + 2]) {
            cout << str.substr(i, 3) << "\n";
            return;
        }
    }
    cout << -1 << "\n";
}
void test_cases(int test) {
    while (test--) {
        string str;
        cin >> str;
        solution(str);
    }
}
int main() {
    int n;
    cin >> n;
    test_cases(n);
}