#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define vvii vector<vector<pair<ll, ll>>>

void test_case() {
    ll n, m, k;
    cin >> n >> m >> k;
    vvii graph(n + 1);
    ll u, v, distance;
    for (ll i = 0; i < m; i++) {
        cin >> u >> v >> distance;
        graph[u].push_back({v, distance});
        graph[v].push_back({u, distance});
    }
    set<ll> shops;
    ll temp;
    for (ll i = 0; i < k; i++) {
        cin >> temp;
        shops.insert(temp);
    }
    if (shops.size() == 0) {
        printf("-1\n");
        return;
    }
    vector<ll> distanceVector(n + 1, INT_MAX);
    priority_queue<pair<ll, ll>, vector<pair<ll, ll>>, greater<pair<ll, ll>>> pq;
    for (ll shop : shops) {
        distanceVector[shop] = 0;
        pq.push({0, shop});
    }
    while (pq.size()) {
        auto top = pq.top();
        pq.pop();
        for (auto i : graph[top.second]) {
            if (distanceVector[i.first] > distanceVector[top.second] + i.second) {
                distanceVector[i.first] = distanceVector[top.second] + i.second;
                pq.push({distanceVector[i.first], i.first});
            }
        }
    }
    ll ans = INT_MAX;
    for (ll i = 1; i <= n; i++) {
        if (shops.count(i) == 0) {
            ans = min(ans, distanceVector[i]);
        }
    }
    if (ans == INT_MAX) {
        printf("-1\n");
    } else {
        printf("%lld\n", ans);
    }
}

int main() {
    test_case();
}