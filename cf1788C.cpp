#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    if (n % 2 == 0) {
        printf("No\n");
        return;
    }
    cout << "Yes\n";
    int first = n, second = n + 1;
    for (first = n; first >= 1; first -= 2) {
        cout << first << " " << second << "\n";
        second++;
    }
    second = 2 * n;
    for (first = 2; first <= n; first += 2) {
        cout << first << " " << second << "\n";
        second--;
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}