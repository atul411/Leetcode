#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    vector<int> ans(n - 1);
    int last = 0;
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] == 0) {
            ans[i] = last;
        } else {
            ans[i] += arr[i] + last;
            last += arr[i];
            int t = log2(n - i - 1);
            if (i + pow(2, t) < n) {
                arr[i + pow(2, t)] += arr[i];
            }
        }
    }
    for (auto i : ans) {
        cout << i << "\n";
    }
    cout << "\n\n";
}