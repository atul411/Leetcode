#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, used = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1) {
            arr[i]++;
        }
    }
    for (int i = 1; i < n; i++) {
        while (arr[i] % arr[i - 1] == 0) {
            arr[i]++;
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