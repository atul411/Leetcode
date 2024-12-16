#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    scanf("%d %d", &n, &k);
    vector<int> arr1(n), peaks(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
    }
    for (int i = 1; i < n - 1; i++) {
        if (arr1[i] > arr1[i - 1] and arr1[i] > arr1[i + 1]) {
            peaks[i]++;
        }
        peaks[i] += peaks[i - 1];
    }
    peaks[n - 1] += peaks[n - 2];
    int ans = 1, index = 1;
    for (int i = 0; i < n - k + 1; i++) {
        int peak = peaks[i + k - 1] - peaks[i];
        if (i + k < n and arr1[i + k] < arr1[i + k - 1] and arr1[i + k - 1] > arr1[i + k - 2]) {
            peak--;
        }
        if (peak + 1 > ans) {
            ans = peak + 1;
            index = i + 1;
        }
    }
    cout << ans << " " << index << "\n";
}

int main() {
    int t;
    scanf("%d", &t);
    while (t--) {
        test_case();
    }
}