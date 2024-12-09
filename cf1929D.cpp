#include <bits/stdc++.h>
using namespace std;

bool solution(int n, int m) {
    if (n == m) {
        return true;
    }
    if (n % 3 != 0 or n < m) {
        return false;
    }
    if (solution(n / 3, m)) {
        return true;
    } else if (solution(2 * n / 3, m)) {
        return true;
    }
    return false;
}
void test_case() {
    int n, m;
    cin >> n >> m;
    bool a = solution(n, m);
    if (a) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        test_case();
    }
}