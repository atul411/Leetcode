#include <bits/stdc++.h>
using namespace std;
#define ll long long

void test_case() {
    ll n, x;
    cin >> n;
    vector<ll> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr[x - 1] = i;
    }

    ll posMax = 0, posMin = n;
    string ans;
    for (int i = 0; i < n; i++) {
        posMax = max(posMax, arr[i]);
        posMin = min(posMin, arr[i]);
        if (posMax - posMin == i) {
            ans.push_back('1');
        } else {
            ans.push_back('0');
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