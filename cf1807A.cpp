#include <bits/stdc++.h>
using namespace std;

void test_case(int n) {
    int a, b, c;
    while (n--) {
        scanf("%d %d %d", &a, &b, &c);
        if (a + b == c) {
            printf("+\n");
        } else {
            printf("-\n");
        }
    }
}
int main() {
    int t;
    scanf("%d", &t);
    test_case(t);
}