#include <bits/stdc++.h>
using namespace std;

void bitsOfNumber(vector<int> &arr, int n) {
    int index = 0;
    while (n) {
        arr[index] += n & 1;
        index++;
        n >>= 1;
    }
}

void test_case() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(30);
    bitsOfNumber(arr, n);
    for (int i = arr.size() - 1; i >= 0; i--) {
        if (arr[i] == 0) {
            int number = pow(2, n - 1 - i);
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