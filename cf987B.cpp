#include <bits/stdc++.h>
using namespace std;

int main() {
    double x, y;
    cin >> x >> y;
    double first = y * log(x), second = x * log(y);
    if (first == second) {
        printf("=");
    } else if (first > second) {
        printf(">");
    } else {
        printf("<");
    }
}