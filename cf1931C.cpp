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
        printf("0\n");
        return;
    }
    int start = 1, end = 1, i = 1;
    while (i < n and arr[i] == arr[i - 1]) {
        start++;
        i++;
    }
    i = n - 2;
    while (i >= 0 and arr[i] == arr[i + 1]) {
        end++;
        i--;
    }
    if (start > n - end) {
        printf("0\n");
    } else if (arr[0] == arr[n - 1]) {
        cout << (n - start - end) << "\n";
    } else {
        cout << (n - max(start, end)) << "\n";
    }
}

int main() {
    int t;

    cin >> t;
    while (t--) {
        test_case();
    }
}