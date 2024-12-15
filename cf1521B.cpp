#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b % a == 0) {
        return a;
    }
    return gcd(b % a, a);
}
void test_case() {
    int n;
    cin >> n;
    int arr[n];
    vector<vector<int>> ans;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < n - 1; i++) {
        if (gcd(arr[i], arr[i + 1]) != 1) {
            int mn = min(arr[i], arr[i + 1]);
            arr[i + 1] = mn + 1;
            arr[i] = mn;
        }
    }
    for (auto i : arr) {
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