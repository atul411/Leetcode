#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    int arr1[n], arr2[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        arr2[i] = arr1[i];
    }
    int start = 0, end = n - 1;
    sort(arr1, arr1 + n);
    while (start < n and arr2[start] == arr1[start]) {
        start++;
    }

    while (end > 0 and arr2[end] == arr1[end]) {
        end--;
    }
    int first = start, second = end;
    while (start <= end) {
        swap(arr2[start], arr2[end]);
        start++;
        end--;
    }
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            cout << "no\n";
            return 0;
        }
    }

    cout << "yes\n";
    if (first > second) {
        cout << 1 << " " << 1 << "\n";
    } else {
        cout << first + 1 << " " << second + 1 << "\n";
    }
}