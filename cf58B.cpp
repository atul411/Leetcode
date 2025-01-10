#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << n << " ";
    int i = 2;
    while (n > 1) {
        if (n % i == 0) {
            cout << n / i << " ";
            n = n / i;
        } else {
            i++;
        }
    }
    if (n != 1) {
        cout << n << " 1";
    }
}