#include <bits/stdc++.h>
using namespace std;

int binary_search(int a, vector<int> &arr) {
    int start = 0, end = arr.size() - 1, ans = -1;
    while (start <= end) {
        int mid = (end + start) / 2;
        if (arr[mid] > a) {
            end = mid - 1;
        } else if (arr[mid] == a) {
            start = mid + 1;
            ans = mid;
        } else {
            start = mid + 1;
            ans = mid;
        }
    }
    return ans;
}
int main() {
    int n, m;
    cin >> n >> m;
    vector<int> arr1(n), arr2(m);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 0; i < m; i++) {
        cin >> arr2[i];
    }
    sort(arr1.begin(), arr1.end());
    for (int i = 0; i < m; i++) {
        arr2[i] = binary_search(arr2[i], arr1);
    }
    for (auto i : arr2) {
        cout << i + 1 << " ";
    }
}