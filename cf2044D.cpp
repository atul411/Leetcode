#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n), arr3(n);
    fill_n(&arr2[0], n, 1);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    int start = 1;
    for (int i = 0; i < n; i++) {
        if (arr2[arr1[i] - 1] == 1) {
            arr3[i] = arr1[i];
            arr2[arr1[i] - 1] = 0;
        } else {
            arr3[i] = start;
            arr2[start - 1] = 0;
        }
        while (arr2[start - 1] == 0) {
            start++;
        }
    }
    for (auto i : arr3) {
        cout << i << " ";
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}