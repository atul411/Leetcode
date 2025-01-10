#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    int l = 1, r = n;
    vector<int> arr(n);
    for (int i = 0; i < k; i++) {
        for (int j = i; j < n; j += k) {
            if (j % 2 == 0) {
                arr[j] = l;
                l++;
            } else {
                arr[j] = r;
                r--;
            }
        }
    }

    for (auto i : arr) {
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