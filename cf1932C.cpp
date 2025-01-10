#include <bits/stdc++.h>
using namespace std;
#define int long long

void test_case() {
    int n, m;
    cin >> n >> m;
    vector<int> arr(n);
    for (auto &a : arr) cin >> a;
    string str;
    cin >> str;
    int start = 0, end = n - 1;
    for (int i = 0; i < n; i++) {
        if (str[i] == 'L') {
            start++;
        } else {
            end--;
        }
    }
    int currIndex = 0, curr = 1;
    vector<int> ans;
    for (int i = n - 1; i >= 0; i--) {
        if (str[i] == 'L') {
            start--;
            curr = (curr % m * arr[start] % m) % m;
        } else {
            end++;
            curr = (arr[end] % m * curr % m) % m;
        }
        ans.push_back(curr % m);
    }
    reverse(ans.begin(), ans.end());
    for (auto &a : ans) {
        printf("%lld ", a);
    }
    printf("\n");
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}