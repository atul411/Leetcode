#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ll first, second, ans = 0;
    scanf("%lld %lld", &first, &second);
    while (first >= 1 and second >= 1) {
        if (first < second) {
            ans++;
            first--;
            second -= 2;
        } else if (second <= first and first >= 2) {
            ans++;
            first -= 2;
            second--;
        } else {
            first = 0;
            second = 0;
        }
    }
    printf("%lld", ans);
}