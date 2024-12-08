#include <bits/stdc++.h>
using namespace std;

int countEqualStart(vector<int> arr) {
    int temp = 1;
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] == arr[0]) {
            temp++;
        }
    }
    return temp;
}

void test_case() {
    int n, k;
    cin >> n >> k;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    if (arr[0] == arr[n - 1]) {
        int curr = countEqualStart(arr);
        if (curr >= k) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    } else {
        int temp = 0, i = 0, j;
        while (i < arr.size()) {
            if (arr[i] == arr[0]) {
                temp++;
            }
            if (temp == k) {
                break;
            }
            i++;
        }
        temp = 0, j = arr.size() - 1;
        while (j >= 0) {
            if (arr[j] == arr[arr.size() - 1]) {
                temp++;
            }
            if (temp == k) {
                break;
            }
            j--;
        }
        if (j > i) {
            printf("YES\n");
        } else {
            printf("NO\n");
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