#include <bits/stdc++.h>
using namespace std;

void test_case() {
    long long n, temp = 0, ans = 0, wait = 0;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> pq;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        pq.push(temp);
    }

    while (pq.size()) {
        auto top = pq.top();
        pq.pop();
        if (top >= wait) {
            ans++;
            wait += top;
        }
    }
    cout << ans << "\n";
}

int main() {
    test_case();
}