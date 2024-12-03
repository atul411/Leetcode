#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int hh, mm;
    while (t--) {
        cin >> hh >> mm;
        int ans = (24 - hh) * 60 - mm;
        printf("%d \n", ans);
    }
}
int main() {
    int t;
    cin >> t;
    test_case(t);
}