#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, mn = INT_MAX;
    cin >> n;
    vector<int> arr1(n);
    for (int i = 0; i < n; i++) {
        cin >> arr1[i];
        mn = min(mn, arr1[i]);
    }

    vector<int> arr2 = arr1;
    sort(arr2.begin(), arr2.end());
    for (int i = 0; i < n; i++) {
        if (arr1[i] != arr2[i]) {
            if (arr1[i] % mn != 0) {
                printf("NO\n");
                return;
            }
        }
    }
    printf("YES\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}