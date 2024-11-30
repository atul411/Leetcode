#include <bits/stdc++.h>
using namespace std;

vector<int> arr(26, 0);

void test_case(int n) {
    char ch;
    while (n--) {
        cin >> ch;
        if (arr[ch - 'a']) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
    }
}

int main() {
    for (char ch : "codeforces") {
        arr[ch - 'a']++;
    }
    int t;
    cin >> t;
    test_case(t);
}