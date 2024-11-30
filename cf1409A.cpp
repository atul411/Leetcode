#include <bits/stdc++.h>
using namespace std;

void test_case(int n) {
    while (n--) {
        int a, b;
        scanf("%d %d", &a, &b);
        int ans = abs(a - b) / 10;
        if (abs(a - b) % 10 != 0) {
            ans++;
        }
        printf("%d\n", ans);
    }
}

int main() {
    int t;
    scanf("%d", &t);
    test_case(t);
}