#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int n;
    while (t--) {
        int twos = 0, ones = 0, curr;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> curr;
            if (curr == 2) {
                twos++;
            } else {
                ones++;
            }
        }
        if ((2 * twos + ones) % 2 != 0) {
            printf("NO\n");
        } else {
            int half = (2 * twos + ones) / 2;
            if (half % 2 != 0 and ones == 0) {
                printf("NO\n");
            } else {
                printf("YES\n");
            }
        }
    }
}

int main() {
    int32_t t;
    cin >> t;
    test_case(t);
}