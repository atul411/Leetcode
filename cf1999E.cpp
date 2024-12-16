#include <bits/stdc++.h>
using namespace std;
#define ll long long

const int N = 2e+5 + 1;

vector<int> arr;
int count_digit(int n) {
    int count = 0;
    while (n) {
        count++;
        n /= 3;
    }
    return count;
}
void test_case() {
    int l, r, ans = 0;
    cin >> l >> r;
    ans = arr[r] - arr[l - 1];
    cout << ans + count_digit(l) << "\n";
}

int main() {
    int t;
    cin >> t;
    arr.resize(N);
    arr[0] = 0;
    for (int i = 1; i < N; i++) {
        int digit = count_digit(i);
        arr[i] = arr[i - 1] + digit;
    }
    while (t--) {
        test_case();
    }
}