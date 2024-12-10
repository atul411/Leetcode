#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> k >> n;
    int arr[k];
    int diff = 0, curr = 1;
    for (int i = 0; i < k; i++) {
        if (n - curr - diff >= k - i - 1) {
            arr[i] = curr + diff;
            diff++;
            curr = arr[i];
        } else {
            arr[i] = curr + 1;
            curr++;
        }
    }
    for (auto i : arr) {
        cout << i << " ";
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