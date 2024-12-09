#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr1(n);
    vector<int> arr2(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i].first;
        arr1[i].second = i;
    }
    for (int i = 0; i < n; i++) {
        cin >> arr2[i];
    }
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int arr[n];
    int j = 0;
    for (auto i : arr1) {
        arr[i.second] = arr2[j++];
    }
    for (auto i : arr) {
        cout << i << " ";
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}