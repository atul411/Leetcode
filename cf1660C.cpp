#include <bits/stdc++.h>
using namespace std;

void test_case() {
    string str;
    cin >> str;
    vector<int> arr(26);
    int m = 0;
    for (int i = 0; i < str.size(); i++) {
        char ch = str[i];
        if (arr[ch - 'a']) {
            m += 2;
            fill_n(&arr[0], 26, 0);
        } else {
            arr[ch - 'a']++;
        }
    }
    m = str.size() - m;
    cout << m << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}