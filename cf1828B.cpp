#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b % a == 0) {
        return a;
    }
    return gcd(b % a, a);
}
void test_case() {
    int n, temp;
    cin >> n;
    vector<int> arr;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        if (temp - i - 1 != 0) {
            arr.push_back(abs(temp - i - 1));
        }
    }
    if (arr.size() == 0) {
        cout << n << "\n";
        return;
    }
    int ans = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        ans = gcd(ans, arr[i]);
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