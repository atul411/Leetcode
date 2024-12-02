#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int first, second;
    int mishika = 0, chris = 0;
    while (t--) {
        cin >> first >> second;
        if (first > second) {
            mishika++;
        } else if (first < second) {
            chris++;
        }
    }
    if (mishika > chris) {
        printf("Mishka");
    } else if (chris > mishika) {
        printf("Chris");
    } else {
        printf("Friendship is magic!^^");
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}