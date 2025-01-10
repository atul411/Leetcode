#include <bits/stdc++.h>
using namespace std;
#define Long long long

void test_case() {
    Long n, k, temp;
    cin >> n >> k;
    priority_queue<Long> pq1;
    priority_queue<Long, vector<Long>, greater<Long>> pq2;
    for (int i = 0; i < n; i++) {
        cin >> temp;
        pq1.push(temp);
        pq2.push(temp);
    }
    Long ans = 0;
    for (int i = 0; i < k; i++) {
        Long curr = pq1.top();
        pq1.pop();
        cin >> temp;
        Long mn = curr;
        if (pq2.size() and temp > 1) {
            mn = pq2.top();
        }
        while (temp > 1) {
            pq2.pop();
            temp--;
        }
        ans += (curr + mn);
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