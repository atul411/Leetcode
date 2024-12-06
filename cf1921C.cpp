#include <bits/stdc++.h>
using namespace std;
#define ll long long

void test_case() {
    ll n, f, a, b, currTime = 0;
    cin >> n >> f >> a >> b;
    ll arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    bool possible = true;
    for (int i = 0; i < n; i++) {
        if ((arr[i] - currTime) * a > b) {
            f -= b;
        } else {
            f -= (arr[i] - currTime) * a;
        }
        if (f <= 0) {
            possible = false;
            break;
        }
        currTime = arr[i];
    }
    if (possible) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}