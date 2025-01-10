#include <bits/stdc++.h>
using namespace std;
#define Long long long
#define pll pair<Long, Long>

int main() {
    int n, q;
    cin >> n >> q;
    vector<pll> query(q);
    vector<Long> arr(n);

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < q; i++) {
        cin >> query[i].first >> query[i].second;
    }
    vector<Long> starting(n), end(n);
    for (int i = 0; i < q; i++) {
        starting[query[i].first - 1]++;
        end[query[i].second - 1]++;
    }
    Long curr = 0;
    priority_queue<Long> pq;
    for (int i = 0; i < n; i++) {
        curr += starting[i];
        pq.push(curr);
        curr -= end[i];
    }
    sort(arr.begin(), arr.end());
    Long ans = 0;
    int index = n - 1;
    while (pq.size()) {
        ans += pq.top() * arr[index];
        pq.pop();
        index--;
    }
    cout << ans << "\n";
}