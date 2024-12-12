#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ll n, m, first, second;
    cin >> n >> m;
    ll  arr1[n], arr2[n], arr3[n];
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    arr2[0] = 0;
    for (int i = 1; i < n; i++) {
        if (arr1[i] >= arr1[i - 1]) {
            arr2[i] = arr2[i - 1];
        } else {
            arr2[i] = arr2[i - 1] + arr1[i - 1] - arr1[i];
        }
    }
    arr3[n - 1] = 0;
    for (int i = n - 2; i >= 0; i--) {
        if (arr1[i] > arr1[i + 1]) {
            arr3[i] = arr3[i + 1];
        } else {
            arr3[i] = arr3[i + 1] + arr1[i + 1] - arr1[i];
        }
    }
    for (int i = 0; i < m; i++) {
        cin >> first >> second;
        if (first <= second) {
            cout << arr2[second - 1] - arr2[first - 1] << "\n";
        } else {
            cout << arr3[second - 1] - arr3[first - 1] << "\n";
        }
    }
}