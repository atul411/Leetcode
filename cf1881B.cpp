#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int arr[3];
    cin >> arr[0] >> arr[1] >> arr[2];
    sort(arr, arr + 3);
    if (arr[2] % arr[0] != 0 or arr[1] % arr[0] != 0) {
        printf("NO\n");
        return;
    }
    arr[2] = arr[2] / arr[0];
    arr[1] = arr[1] / arr[0];
    arr[0] = 1;
    if (arr[1] + arr[2] <= 5) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}