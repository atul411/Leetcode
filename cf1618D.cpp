#include <bits/stdc++.h>
using namespace std;
#define ll long long

void test_case() {
    ll ans = 0, number, n, k;
    map<ll, ll> mp;
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> number;
        ans += number;
        mp[number]++;
    }
    priority_queue<pair<int, int>> pq;
    for (auto i : mp) {
        pq.push({i.first, i.second});
    }
    for (int i = 0; i < k; i++) {
        auto top1 = pq.top();
        pq.pop();
        top1.second--;
        if (pq.size() > 0) {
            auto top2 = pq.top();
            pq.pop();
            top2.second--;
            ans -= top1.first;
            ans -= top2.first;
            if (top2.second > 0) {
                pq.push(top2);
            }
        } else {
            ans -= 2 * top1.first;
            ans++;
        }
        if (top1.second > 0) {
            pq.push(top1);
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