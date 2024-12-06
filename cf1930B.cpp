#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    int curr = n / 2 + 1;
    for (int i = 0; i < n; i += 2) {
        arr[i] = curr;
        curr++;
    }
    curr = 1;
    for (int i = 1; i < n; i += 2) {
        arr[i] = curr;
        curr++;
    }
    for (auto temp : arr) {
        cout << temp << " ";
    }
    cout << "\n";
}
int main() {
    int t;

    cin >> t;
    while (t--) {
        test_case();
    }
}