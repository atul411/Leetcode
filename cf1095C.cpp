#include <bits/stdc++.h>
using namespace std;

void solve(int n, int k) {
    priority_queue<int> pq;
    int pos = 0;
    while (n >= (1 << pos)) {
        if (n & (1 << pos)) {
            pq.push((1 << pos));
        }
        pos++;
    }
    if (k < pq.size()) {
        printf("NO");
        return;
    }
    while (pq.size() != k) {
        if (pq.top() == 1) {
            printf("NO");
            return;
        }
        auto top = pq.top();
        pq.pop();
        pq.push(top >> 1);
        pq.push(top >> 1);
    }
    printf("YES\n");
    while (pq.size()) {
        cout << pq.top() << " ";
        pq.pop();
    }
}

int main() {
    int n, k;
    cin >> n >> k;
    solve(n, k);
}