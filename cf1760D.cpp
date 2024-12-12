#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int l = 0, count = 0;
    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1] and l < i - 1) {
            count++;
            l = i;
        } else if (arr[i] > arr[i - 1]) {
            l = i;
        } else if (i == n - 1 and l<)
    }
    
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}