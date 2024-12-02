#include <bits/stdc++.h>
using namespace std;

void test_case(int t) {
    int n;
    while (t--) {
        cin >> n;
        int half = n / 2;
        if (half % 2 != 0) {
            printf("NO\n");
        } else {
            vector<int> arr(n);
            int curr = 2;
            int sum1 = 0, sum2 = 0;
            for (int i = 0; i < half; i++) {
                arr[i] = curr;
                sum1 += curr;
                curr += 2;
            }
            curr = 1;
            for (int i = half; i < n; i++) {
                arr[i] = curr;
                sum2 += curr;
                curr += 2;
            }
            arr[n - 1] += sum1 - sum2;
            printf("YES\n");
            for (auto num : arr) {
                cout << num << " ";
            }
            cout << "\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}