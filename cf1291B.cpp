#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

void test_case() {
    int n;
    cin >> n;
    vi arr(n);
    for (auto &x : arr) cin >> x;
    int prefixEnd = -1, suffixEnd = n;
    for (int i = 0; i < n; i++) {
        if (arr[i] < i) break;
        prefixEnd++;
    }
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] < n - 1 - i) break;
        suffixEnd--;
    }
    if (prefixEnd >= suffixEnd) {
        printf("Yes\n");
    } else {
        printf("No\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}