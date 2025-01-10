#include <bits/stdc++.h>
using namespace std;

void test_case() {
    int n, k;
    cin >> n >> k;
    string str;
    cin >> str;
    vector<int> arr(26);
    for (auto ch : str) {
        arr[ch - 'a']++;
    }
    int evenCount = 0, oddCount = 0;
    for (int i = 0; i < 26; i++) {
        evenCount += arr[i] / 2;
        oddCount += arr[i] % 2;
    }
    int ans = (evenCount / k) * 2;
    oddCount += (evenCount % k) * 2;
    if (oddCount >= k) {
        ans++;
    }
    printf("%d\n", ans);
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}