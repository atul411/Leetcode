#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (a == 0) {
        return b;
    }
    return gcd(b % a, a);
}

int gcd(vector<int> arr) {
    int n = arr.size(), gc = arr[0];
    for (int i = 1; i < n; i++) {
        gc = gcd(gc, arr[i]);
    }
    return gc;
}
void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (auto &i : arr) {
        cin >> i;
    }
    int gc = gcd(arr);
    if (gc == 1) {
        cout << "0\n";
        return;
    }
    int ans = INT_MAX;
    for (int i = 0; i < n; i++) {
        int temp = arr[i];
        arr[i] = gcd(arr[i], i + 1);
        gc = gcd(arr);
        arr[i] = temp;
        if (gc == 1) {
            ans = min(ans, n - i);
        }
    }
    cout << min(ans, 3) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}
