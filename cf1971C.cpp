#include <bits/stdc++.h>
using namespace std;

bool atobClockWise(int a, int b, int c) {
    return c >= a and c <= b;
}
void test_case() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (a > b) {
        swap(a, b);
    }
    bool first = atobClockWise(a, b, c);
    bool second = atobClockWise(a, b, d);
    if (first and second) {
        printf("NO\n");
    } else if (first or second) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}