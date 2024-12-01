#include <bits/stdc++.h>
using namespace std;

void test_case(int n) {
    while (n--) {
        int curr = 1, ans = 1, k, number = 1;
        cin >> k;
        while (curr < k) {
            number++;
            while (number % 3 == 0 or number % 10 == 3) {
                number++;
            }
            curr++;
        }
        cout << number << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}