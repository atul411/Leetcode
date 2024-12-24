#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    vector<bool> arr(n + 1, true);
    for (int i = 0; i < n; i++) {
        if (str[i] == 'p') {
            arr[i + 1] = false;
        }
    }
    for (int i = n - 1; i >= 0; i--) {
        if (str[i] == 's' and arr[n - i + 1] == false) {
            printf("NO\n");
            return;
        }
    }
    printf("YES\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}