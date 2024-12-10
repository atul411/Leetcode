#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (n == 1) {
        cout << max(n - 2, n) << "\n";
        return;
    }
    sort(arr, arr + n);
    int ans = 0, different = 0;
    if (arr[0] > 2) {
        ans = (arr[0] - 2);
        different = 1;
        arr[0] = 2;
    }
    different = 1;
    for (int i = 1; i < n; i++) {
        
        if (arr[i] != arr[i - 1]){

        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}