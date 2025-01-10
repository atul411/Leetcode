#include <bits/stdc++.h>
using namespace std;
#define ll long long

bool isPerfect(ll a) {
    while (a > 1) {
        if (a % 2 != 0) return false;
        a /= 2;
    }
    return true;
}

long long solve(long long n, long long k) {
    long long luckyValue = 0;
    queue<pair<long long, long long>> segments;
    segments.push({1, n});

    while (!segments.empty()) {
        auto pair = segments.front();
        auto l = pair.first, r = pair.second;
        segments.pop();

        long long length = r - l + 1;
        if (length < k) {
            continue;
        }

        long long m = (l + r) / 2;

        if (length % 2 == 1) {
            luckyValue += m;
            if (m - 1 >= l) segments.push({l, m - 1});
            if (m + 1 <= r) segments.push({m + 1, r});
        } else {
            if (m >= l) segments.push({l, m});
            if (m + 1 <= r) segments.push({m + 1, r});
        }
    }

    return luckyValue;
}

void test_case() {
    ll n, k, ans = 0;
    cin >> n >> k;
    if (k == 1) {
        ans = n * (n + 1) / 2;
        cout << ans << "\n";
        return;
    }
    ans = solve(n, k);
    cout << ans << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}