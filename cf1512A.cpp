#include <bits/stdc++.h>
using namespace std;

struct Triplet {
    int number, index, freq;
};

void test_case(int t) {
    while (t--) {
        Triplet first = {0, 0, 0}, second = {0, 0, 0};
        int n, number;
        scanf("%d", &n);
        for (int i = 0; i < n; i++) {
            scanf("%d", &number);
            if (first.number == number or first.number == 0) {
                first.number = number;
                first.index = i;
                first.freq++;
            } else {
                second.number = number;
                second.index = i;
                second.freq++;
            }
        }
        if (first.freq == 1) {
            printf("%d\n", first.index + 1);
        } else {
            printf("%d\n", second.index + 1);
        }
    }
}

int main() {
    int t;
    scanf("%d", &t);
    test_case(t);
}