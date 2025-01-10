#include <bits/stdc++.h>
using namespace std;

int order(int n) {
    int exponent = 0;
    while (pow(10, exponent) <= n) {
        exponent++;
    }
    return exponent - 1;
}

int main() {
    int n;
    cin >> n;
    int ans = 0;
    vector<int> arr;
    while (n > 0) {
        int exponet = order(n);
        int number = 0;
        for (int i = exponet; i >= 0; i--) {
            int temp = n / pow(10, i);
            if (temp % 10 != 0) {
                number += pow(10, i);
            }
        }
        ans++;
        n -= number;
        arr.push_back(number);
    }
    cout << ans << "\n";
    sort(arr.begin(), arr.end());
    for (auto i : arr) cout << i << " ";
}