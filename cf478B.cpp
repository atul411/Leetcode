#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll n, m;
    cin >> n >> m;
    ll mx = (n - m + 1) * (n - m) / 2;
    ll mn = 0;
    ll temp = n / m;
    for (int i = 0; i < m; i++) {
        if (i < n % m) {
            mn += (temp + 1) * temp / 2;
        } else {
            mn += temp * (temp - 1) / 2;
        }
    }
    cout << mn << " " << mx;
}