#include <bits/stdc++.h>
using namespace std;

bool isPowerOfTwo(int n) {
    while (n > 1) {
        if (n % 2 != 0) return false;
        n /= 2;
    }
    return true;
}

int solve(string &given, string target) {
    int count = 0, i = 0, j = 0;
    while (i < given.length() and j < target.length()) {
        if (given[i] == target[j]) {
            i++;
            j++;
        } else {
            count++;
            i++;
        }
    }
    count += target.length() - j;
    count += given.length() - i;
    return count;
}

void test_case() {
    int n;
    cin >> n;
    if (isPowerOfTwo(n)) {
        printf("0\n");
        return;
    }
    int ans = INT_MAX;
    string str = to_string(n);
    for (int i = 0; i <= 60; i++) {
        long long number = pow(2, i);
        ans = min(ans, solve(str, to_string(number)));
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}