#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

void test_case(int t) {
    int n;
    vector<int> arr;
    while (t--) {
        cin >> n;
        arr = vi(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        bool possible = true;
        for (int i = 0; i < n; i++) {
            if (abs(arr[i] - i - 1) > 1) {
                possible = false;
            }
        }
        possible ? printf("YES\n") : printf("NO\n");
    }
}

int main() {
    int t;
    cin >> t;
    test_case(t);
}