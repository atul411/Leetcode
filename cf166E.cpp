#include <bits/stdc++.h>
using namespace std;
#define Long long long

const Long mod = 1e9 + 7;

int main() {
    int n;
    cin >> n;
    if (n == 1) {
        printf("0");
        return 0;
    }
    vector<Long> arr = {0, 1, 1, 1};
    vector<Long> temp(4, 0);
    for (int i = 2; i <= n; i++) {
        for (int j = 0; j < 4; j++) {
            temp[j] = (accumulate(arr.begin(), arr.end(), 0LL) - arr[j]) % mod;
        }
        arr = temp;
    }
    cout << arr[0] << "\n";
}