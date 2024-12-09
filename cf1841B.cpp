#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, temp;
    cin >> n;
    int first, last;
    string str;
    bool inflexHappend = false;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (i == 0) {
            first = temp;
            last = temp;
        }
        if (temp >= last and inflexHappend == false) {
            str.push_back('1');
            last = temp;
        } else if (temp <= first and inflexHappend == false) {
            str.push_back('1');
            last = temp;
            inflexHappend = true;
        } else if (inflexHappend and temp >= last and temp <= first) {
            str.push_back('1');
            last = temp;
        } else {
            str.push_back('0');
        }
    }
    cout << str << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}