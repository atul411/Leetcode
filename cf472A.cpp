#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, first, second;
    cin >> n;
    if (n % 2 == 0) {
        first = 4;
        second = n - 4;
    } else {
        first = 9;
        second = n - 9;
    }
    cout << first << " " << second;
}