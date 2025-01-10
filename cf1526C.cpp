#include <bits/stdc++.h>
using namespace std;

int main() {
    int64_t n, sum = 0, curr;
    cin >> n;
    priority_queue<int64_t, vector<int64_t>, greater<int64_t>> pq;
    for (int i = 0; i < n; i++) {
        cin >> curr;
        sum += curr;
        pq.push(curr);
        while (sum < 0) {
            sum -= pq.top();
            pq.pop();
        }
    }
    cout << pq.size();
}