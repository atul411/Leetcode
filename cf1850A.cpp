#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int a, b, c;
    while (t--) {
        cin >> a >> b >> c;
        if (a + b >= 10 or b + c >= 10 or c + a >= 10) {
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