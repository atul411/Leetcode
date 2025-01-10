#include <bits/stdc++.h>
using namespace std;
#define int long long

int countfactor(int x, int y) {
    int temp = 0;
    while (x % y == 0) {
        temp++;
        x /= y;
    }
    return temp;
}
void test_case() {
    int n, m;
    cin >> n >> m;
    int a = countfactor(n, 2), b = countfactor(n, 5);
    int increaded2 = 0, increaded5 = 0;
    int k = 1;
    while (k < m) {
        if (a + increaded2 <= b) {
            if (k * 2 <= m) {
                increaded2++;
            }
            k = k * 2;
        } else {
            if (k * 5 <= m) {
                increaded5++;
            }
            k = k * 5;
        }
    }
    cout << (int)(n * pow(2, increaded2) * pow(5, increaded5))<<"\n";
}

int32_t main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}