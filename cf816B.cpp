#include <bits/stdc++.h>
using namespace std;
#define pii pair<int, int>

void solve() {
    int n, k, q, start, end;
    cin >> n >> k >> q;
    vector<pii> a(200005, {0, 0});
    for (int i = 0; i < n; i++) {
        cin >> start >> end;
        a[start].first++;
        a[end].second++;
    }
    vector<int> dp(200005, 0);
    int curr = 0;
    for (int i = 0; i < dp.size(); i++) {
        curr += a[i].first;
        dp[i] = curr;
        curr -= a[i].second;
    }
    vector<int> ans(200005, 0);
    curr = 0;
    for (int i = 0; i < ans.size(); i++) {
        if (dp[i] >= k) {
            curr++;
        }
        ans[i] = curr;
    }
    for (int i = 0; i < q; i++) {
        cin >> start >> end;
        cout << ans[end] - ans[start - 1] << "\n";
    }
}

int main() {
    solve();
}