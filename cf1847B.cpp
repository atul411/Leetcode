#include <bits/stdc++.h>
using namespace std;
#define ll long long

void test_case() {
    int n, curr;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    curr = arr[0];
    int ans = 1;
    for (int i = 0; i < n; i++) {
        curr &= arr[i];
        if (curr == 0) {
            if (i == n - 1) break;
            ans++;
            curr = arr[i + 1];
        }
    }
    if (curr != 0) {
        ans--;
    }
    cout << max(ans, 1) << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}