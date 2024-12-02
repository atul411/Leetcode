#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int first, second, third;
    while (t--) {
        cin >> first >> second >> third;
        if (first == second) {
            cout << third << "\n";
        } else if (first == third) {
            cout << second << "\n";
        } else {
            cout << first << "\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}