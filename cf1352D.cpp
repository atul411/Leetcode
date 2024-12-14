#include <bits/stdc++.h>
using namespace std;

void test_case() {
    long long n, a = 0, b = 0, move = 0;
    cin >> n;
    long long start = 0, end = n - 1;
    long long arr[n];
    for (int i = 0; i < n; i++) cin >> arr[i];
    bool aliceTurn = true;
    long long last = 0;
    while (start <= end) {
        move++;
        int curr = 0;
        while (curr <= last and start <= end) {
            if (aliceTurn) {
                curr += arr[start];
                start++;
            } else {
                curr += arr[end];
                end--;
            }
        }
        last = curr;
        if (aliceTurn) {
            a += curr;
        } else {
            b += curr;
        }
        aliceTurn = !aliceTurn;
    }
    cout << move << " " << a << " " << b << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}