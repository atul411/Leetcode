#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    vector<int> arr1(n), arr2(n);
    for (auto &i : arr1) {
        cin >> i;
    }
    for (auto &i : arr2) {
        cin >> i;
    }
    vector<int> temp;
    for (int i = 0; i < n; i++) {
        if (arr2[i] == 0) {
            temp.push_back(arr1[i]);
        }
    }
    sort(temp.rbegin(), temp.rend());
    int start = 0;
    for (int i = 0; i < n; i++) {
        if (arr2[i] == 1) {
            cout << arr1[i] << " ";
        } else {
            cout << temp[start++] << " ";
        }
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