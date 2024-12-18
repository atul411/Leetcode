#include <bits/stdc++.h>
using namespace std;

int main() {
    int first, second;
    cin >> first >> second;
    if (first == second and first == 1) {
        printf("1");
        return 0;
    }
    if (first - second > second - 1) {
        second++;
        cout << second;
    } else {
        second--;
        cout << second;
    }
}