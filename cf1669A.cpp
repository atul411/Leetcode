#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    while (t--) {
        int number;
        scanf("%d", &number);
        if (number >= 1900) {
            printf("Division 1\n");
        } else if (number >= 1600) {
            printf("Division 2\n");
        } else if (number >= 1400) {
            printf("Division 3\n");
        } else {
            printf("Division 4\n");
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    test_case(t);
}