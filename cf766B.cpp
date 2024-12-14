#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr[n];
    for (auto &a : arr) {
        cin >> a;
    }
    sort(arr, arr + n);
    for (int i = 1; i < n - 1; i++) {
        if (arr[i] + arr[i - 1] > arr[i + 1]) {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
}