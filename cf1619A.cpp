#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    string str;
    while (t--) {
        cin >> str;
        if (str.size() % 2 != 0) {
            printf("NO\n");
        } else {
            int mid = str.size() / 2;
            string first = str.substr(0, mid);
            string second = str.substr(0 + mid);
            if (first == second) {
                printf("YES\n");
            } else {
                printf("NO\n");
            }
        }
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}