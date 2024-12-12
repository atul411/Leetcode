#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, mn = INT_MAX, index;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] < mn) {
            mn = arr[i];
            index = i;
        }
    }
    if (n % 2 != 0) {
        printf("Mike\n");
    } else if (index % 2 == 0) {
        printf("Joe\n");
    } else {
        printf("Mike\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}