#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    while (t--) {
        string str;
        cin >> str;
        int first = 0, second = 0;
        for (int i = 0; i < str.size(); i++) {
            if (i < 3) {
                first += str[i] - '0';
            } else {
                second += str[i] - '0';
            }
        }
        if (first == second) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    test_case(t);
}