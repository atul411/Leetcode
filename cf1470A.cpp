#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, m;
    cin >> n >> m;
    vector<long long> arr1(n), arr2(m);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int j = 0; j < m; j++) {
        cin >> arr2[j];
    }

    sort(arr1.begin(), arr1.end());
    int index = 0;
    long long ans = 0;
    for (int i = 0; i < n; i++) {
        if (index <= arr1[i] and arr2[index] < arr2[]) {
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}