#include <bits/stdc++.h>
using namespace std;
#define vl vector<long long>

void test_case() {
    long long n;
    cin >> n;
    vl arr(n - 1);
    for (auto &a : arr) {
        cin >> a;
    }
    long long sum = n * (n + 1) / 2, missingSum = -1;
    vector<bool> found(n, false);
    if (arr[0] <= n) {
        sum -= arr[0];
        found[arr[0] - 1] = true;
    } else {
        missingSum = arr[0];
    }
    for (int i = 1; i < arr.size(); i++) {
        long long temp = arr[i] - arr[i - 1];
        if (temp >= 1 and temp <= n and found[temp - 1] == false) {
            sum -= temp;
            found[temp - 1] = true;
        } else if (temp <= 0) {
            printf("NO\n");
            return;
        } else {
            missingSum = temp;
        }
    }
    if (sum == missingSum or missingSum == -1) {
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