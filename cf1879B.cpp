#include <bits/stdc++.h>
using namespace std;
#define all(x) x.begin(), x.end()
#define mx(a) *max_element(all(a))
#define mn(a) *min_element(all(a))
#define sum(a) accumulate(all(a), 0.0)
#define ll long long
void test_case() {
    int n;
    cin >> n;
    vector<int> a1(n), b1(n);
    for (int i = 0; i < n; i++) {
        cin >> a1[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> b1[i];
    }
    ll mn1 = mn(a1), mn2 = mn(b1);
    ll sum1 = sum(a1), sum2 = sum(b1);
    if (mn1 * n + sum2 < mn2 * n + sum1) {
        cout << (mn1 * n + sum2) << "\n";
    } else {
        cout << (mn2 * n + sum1) << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}