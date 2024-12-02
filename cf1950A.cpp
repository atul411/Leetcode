#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int a, b, c;
    while (t--) {
        cin >> a >> b >> c;
        if (a < b and b < c) {
            printf("STAIR\n");
        } else if (a < b and b > c) {
            printf("PEAK\n");
        } else {
            printf("NONE\n");
        }
    }
}
int main() {
    int t;
    cin >> t;
    test_case(t);
}