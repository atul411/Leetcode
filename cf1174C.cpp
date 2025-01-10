#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
#define pii pair<int, int>

int is_prime(int n) {
    if (n < 4) return n;
    int i = 2;
    while (i * i <= n) {
        if (n % i == 0) {
            return i;
        }
        i++;
    }
    return n;
}

void test_case() {
    int n;
    cin >> n;
    vector<int> arr(n + 1);
    arr[2] = 1;
    int mn = 2, curr = 3;
    while (curr <= n) {
        int a = is_prime(curr);
        if (a == curr) {
            arr[curr] = mn;
            mn++;
        } else {
            arr[curr] = arr[a];
        }
        curr++;
    }
    for (int i = 2; i <= n; i++) {
        cout << arr[i] << " ";
    }
}

int main() {
    test_case();
}