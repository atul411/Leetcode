#include <bits/stdc++.h>
using namespace std;

void test_case(int n) {
    string a, b;
    while (n--) {
        cin >> a >> b;
        swap(a[0], b[0]);
        cout << a << " " << b << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}