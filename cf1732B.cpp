#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    string str;
    cin >> n;
    cin >> str;
    int arr[n], oneCount = 0;
    fill_n(arr, n, 0);
    for (int i = 0; i < n; i++) {
        if (str[i] == '1') {
            oneCount++;
        }
        arr[i] = oneCount;
    }

    int ans = 0;
    for (int i = n - 1; i >= 0; i--) {
        if (str[i] == '1' and str[i + 1] == '0') {
            ans++;
        } else if (str[i] == '0' and str[i + 1] == '1' and arr[i] > 0) {
            ans++;
        }
    }
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}
