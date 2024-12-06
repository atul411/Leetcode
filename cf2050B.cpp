#include <bits/stdc++.h>
using namespace std;
#define ll long long
void test_case() {
    int n, temp;
    ll oddSum = 0, evenSum = 0;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> temp;
        if (i % 2 == 0) {
            evenSum += temp;
        } else {
            oddSum += temp;
        }
    }
    ll evenCount = n / 2, oddCount;
    oddCount = n - evenCount;
    if (evenSum % evenCount != 0 or oddSum % oddCount != 0) {
        printf("NO\n");
        return;
    }
    if (evenSum / evenCount == oddSum / oddCount) {
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