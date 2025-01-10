#include <bits/stdc++.h>
using namespace std;

#define pii pair<int, int>

void test_case() {
    int n, k, temp;
    cin >> n >> k;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        mp[temp]++;
    }
    priority_queue<int, vector<int>, greater<int>> pq;
    for (auto i : mp) {
        pq.push(i.second);
    }
    while (k >= pq.top() && pq.size()) {
        k -= pq.top();
        pq.pop();
    }
    if (pq.empty()) {
        printf("1\n");
    } else {
        cout << pq.size() << "\n";
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        test_case();
    }
}