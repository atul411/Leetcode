#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    sort(arr, arr + n);
    vector<int> temp(n, 1);
    for (int i = 1; i < n; i++) {
        if (arr[i] - arr[i - 1] <= k) {
            temp[i] = temp[i - 1] + 1;
        }
    }
    cout << n - *max_element(temp.begin(), temp.end()) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}