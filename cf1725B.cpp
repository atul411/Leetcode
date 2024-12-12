#include <bits/stdc++.h>
using namespace std;
#define long long long

bool comprator(int a, int b) {
    return a > b;
}
int main() {
    long n, d;
    cin >> n >> d;
    vector<int> arr(n);
    for (auto &i : arr) {
        cin >> i;
    }
    sort(arr.begin(), arr.end(), comprator);
    int start = 0, end = n - 1, ans = 0;
    while (start <= end) {
        int power = arr[start], count = 0;
        count = d / power + 1;
        end = end - count + 1;
        if (end >= start) {
            ans++;
        }
        start++;
    }
    cout << ans << "\n";
}