#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    int start = 0, end = n - 1;
    vector<int> arr(n);
    string ans;
    int last = 0;
    for (auto &x : arr) cin >> x;
    while (start <= end) {
        if (arr[start] <= arr[end] and arr[start] > last) {
            last = arr[start];
            start++;
            ans.push_back('L');
        } else if (arr[end] > last) {
            last = arr[end];
            ans.push_back('R');
            end--;
        } else if (arr[start] > last) {
            last = arr[start];
            ans.push_back('L');
            start++;
        } else {
            start = end + 1;
        }
    }
    cout << ans.size() << "\n";
    cout << ans << "\n";
}

int main() {
    test_case();
}