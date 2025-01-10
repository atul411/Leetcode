#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) return b;
    return gcd(b % a, a);
}

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &a : arr) {
        cin >> a;
    }
    vector<int> gcdArray;
    for (int i = 0; i + 1 < n; i++) {
        int x = gcd(arr[i], arr[i + 1]);
        gcdArray.push_back(x);
    }
    for (auto i : gcdArray) {
        cout << i << "  ";
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}