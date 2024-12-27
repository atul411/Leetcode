#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>

bool check(int k, vector<int> &arr) {
    vector<int> bits(25);
    for (int i = 0; i < k; i++) {
        int index = 0, number = arr[i];
        while (number > 0) {
            bits[index] += (number & 1);
            number >>= 1;
            index++;
        }
    }
    vector<int> curr = bits;
    for (int i = k; i < arr.size(); i++) {
        int index = 0, number = arr[i];
        while (number) {
            curr[index] += (number & 1);
            number >>= 1;
            index++;
        }
        number = arr[i - k];
        index = 0;
        while (number) {
            curr[index] -= (number & 1);
            number >>= 1;
            index++;
        }
        for (int j = 0; j < bits.size(); j++) {
            if (bits[j] == 0 and curr[j] != 0) return false;
            if (bits[j] != 0 and curr[j] == 0) return false;
        }
    }
    return true;
}

void test_case() {
    int n;
    cin >> n;
    vi arr(n);
    for (auto &x : arr) cin >> x;
    int ans = n, start = 1, end = n;
    while (start <= end) {
        int mid = (start + end) / 2;
        if (check(mid, arr)) {
            ans = mid;
            end = mid - 1;
        } else {
            start = mid + 1;
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