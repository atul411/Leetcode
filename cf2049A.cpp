#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int count = 0;
    if (arr[0] != 0) count++;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == 0 and arr[i + 1] != 0) {
            count++;
        }
    }
    if (count == 0) {
        printf("0\n");
        return;
    } else if (count == 1) {
        printf("1\n");
        return;
    }
    printf("2\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}