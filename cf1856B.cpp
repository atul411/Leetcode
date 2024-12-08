#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n;
    long long oneCount = 0;
    long long sum = 0;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        if (arr[i] == 1) {
            oneCount++;
        } else {
            sum += arr[i];
        }
    }
    if (n == 1) {
        cout << "NO\n";
        return;
    }
    if (sum - oneCount >= n - oneCount) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;

    cin >> t;
    while (t--) {
        test_case();
    }
}