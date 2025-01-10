#include <bits/stdc++.h>
using namespace std;
#define Long long long

/**
    r-l+1 ,
    summation alias sigma
    l-> sigma l-1,
    sigma(r) - sigma(l-1) = r-l+1
    sigma (r)- r = sigm(l-1) - (l - 1);
 */

void test_case() {
    int n;
    cin >> n;
    string str;
    cin >> str;
    Long sum = 0, ans = 0;
    map<Long, Long> mp;
    for (int i = 0; i < n; i++) {
        mp[sum - (i - 1)]++;
        sum += (Long)(str[i] - '0');
        ans += mp[sum - i];
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