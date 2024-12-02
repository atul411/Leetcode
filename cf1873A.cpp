#include <bits/stdc++.h>
using namespace std;

void test_case(int n) {
    string str;

    while (n--) {
        cin >> str;
        if (str[0] == 'a' or str[1] == 'b' or str[2] == 'c') {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}