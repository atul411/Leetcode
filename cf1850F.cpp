#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define mx(x) *max_element(all(x))

void test_case() {
    int n, curr;
    cin >> n;
    vector<int> arr1(n + 1, 0);
    for (int i = 0; i < n; i++) {
        scanf("%d", &curr);
        if (curr <= n) {
            arr1[curr]++;
        }
    }
    vector<int> arr2(n + 1, 0);
    for (int i = 1; i <= n; i++) {
        for (int j = i; j <= n; j += i) {
            arr2[j] += arr1[i];
        }
    }
    printf("%d\n", mx(arr2));
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}