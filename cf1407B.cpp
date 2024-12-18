#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    if (b % a == 0) return a;
    return gcd(b % a, a);
}
void test_case() {
    int n, temp, mx = INT_MIN;
    cin >> n;
    vector<int> arr(n);
    vector<int> mp(1001, 0);

    for (int i = 0; i < n; i++) {
        cin >> temp;
        mx = max(mx, temp);
        mp[temp]++;
    }
    int maxGcd = mx;
    for (int i = 0; i < n; i++) {
        int number, gc = 1;
        for (int j = 1000; j >= 1; j--) {
            if (mp[j] != 0 and gcd(maxGcd, j) >= gc) {
                gc = gcd(maxGcd, j);
                number = j;
            }
        }
        arr[i] = number;
        mp[number]--;
        maxGcd = gc;
    }
    for (auto i : arr) {
        cout << i << " ";
    }
    printf("\n");
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}
