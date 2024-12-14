#include <bits/stdc++.h>
using namespace std;

vector<int> arr;
void test_case(int n, int t, int curr) {
    if (curr == t) {
        cout << "YES\n";
        return;
    } else if (curr > t or curr >= n) {
        cout << "NO\n";
        return;
    }
    test_case(n, t, curr + arr[curr]);
}
int main() {
    int n, t;
    cin >> n >> t;
    arr.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    test_case(n, t - 1, 0);
}